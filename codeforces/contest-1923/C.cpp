#include <bits/stdc++.h>
using namespace std;

string to_string(string s) {
  return '"' + s + '"';
}

string to_string(const char* s) {
  return to_string((string) s);
}

string to_string(bool b) {
  return (b ? "true" : "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

#ifdef DEBUG
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

void testcase() {
  int64_t n, q;
  cin >> n >> q;
  vector<int64_t> c(n);

  for (int64_t i = 0; i < n; i++)
    cin >> c[i];

  vector<int64_t> pref(n + 1, 0);
  vector<int64_t> one(n + 1, 0);

  for (int64_t i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + c[i - 1];
    one[i] = one[i - 1] + (c[i - 1] == 1);
  }

  while(q--) {
    int64_t l, r;
    cin >> l >> r;

    int64_t cnt = one[r] - one[l - 1];
    int64_t sum = pref[r] - pref[l - 1];
    int64_t len = r - l + 1;

    if (len == 1) {
      cout << "NO\n";
      continue;
    }

    if (sum >= (cnt * 2 + (len - cnt)))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase(); cout << '\n';
  }

  return 0;
}
