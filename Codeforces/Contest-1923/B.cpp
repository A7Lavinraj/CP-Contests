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

template<typename T> T ceil(T n, T k) {
  return n % k == 0 ? n / k : n / k + 1;
}

void testcase() {
  int64_t n, k;
  cin >> n >> k;
  vector<array<int64_t, 2>> monster(n);

  for (int64_t i = 0; i < n; i++)
    cin >> monster[i][0];
  
  for (int64_t i = 0; i < n; i++)
    cin >> monster[i][1];

  sort(monster.begin(), monster.end(), [](array<int64_t, 2> a, array<int64_t, 2> b) -> bool {
    return abs(a[1]) <= abs(b[1]);
  });

  int64_t time = 0;
  int64_t damage = 0;

  for (int64_t i = 0; i < n; i++) {
    int64_t tmp = damage;
    damage = damage > monster[i][0] ? damage - monster[i][0] : 0;

    monster[i][0] = max(monster[i][0] - tmp, int64_t(0));
    monster[i][1] = abs(monster[i][1]) - time;

    time += monster[i][0] == 0 ? 0 : ceil(monster[i][0], k);
    damage += monster[i][0] % k == 0 ? 0 : k - monster[i][0] % k;


    if (monster[i][0] > monster[i][1] * k) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
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
