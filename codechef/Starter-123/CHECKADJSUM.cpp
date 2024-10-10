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

void solve() {
  int64_t n, q;
  cin >> n >> q;
  vector<int64_t> a(n);
  int64_t sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += 2 * a[i];
  }

  auto check = [&](int64_t v) -> array<int, 2> {
    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
        if ((sum - a[i] - a[j]) == v)
          return {i, j};

    return {-1, -1};
  };

  while(q--) {
    int64_t val;
    cin >> val;
    array<int, 2> res = check(val);

    if (res[0] == -1 && res[1] == -1) {
      cout << -1 << "\n";
    } else {
      if (n == 2) {
        cout << a[0] << ' ' << a[1] << '\n';
      } else {
        cout << a[res[0]] << ' ';

        for (int i = 0; i < n; i++)
          if (res[0] != i && res[1] != i)
            cout << a[i] << ' ';

        cout << a[res[1]] << '\n';
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    solve(); cout << '\n';
  }

  return 0;
}
