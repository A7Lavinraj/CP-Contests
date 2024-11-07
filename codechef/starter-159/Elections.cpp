#include <bits/stdc++.h>
using namespace std;

template<typename T1, typename T2>
ostream& operator<<(ostream &os, const pair<T1, T2> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v) {
  os << "[";
  for (int i = 0; i < v.size(); i++) {
    if (i > 0) os << ", ";
    os << v[i];
  }
  os << "]";
  return os;
}

template<typename T>
ostream& operator<<(ostream &os, const set<T> &s) {
  os << "{";
  for (auto it = s.begin(); it != s.end(); ++it) {
    if (it != s.begin()) os << ", ";
    os << *it;
  }
  os << "}";
  return os;
}

template<typename K, typename V>
ostream& operator<<(ostream &os, const map<K, V> &m) {
  os << "{";
  for (auto it = m.begin(); it != m.end(); ++it) {
    if (it != m.begin()) os << ", ";
    os << it->first << ": " << it->second;
  }
  os << "}";
  return os;
}

template<typename T>
void debug_out(T val) {
  cerr << val;
}

template<typename T, typename... Args>
void debug_out(T val, Args... args) {
  cerr << val << " ";
  debug_out(args...);
}

#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: "; debug_out(__VA_ARGS__); cerr << endl;

const int INF = int(1e9);

void testcase() {
  int64_t n, x;
  cin >> n >> x;
  vector<array<int64_t, 2>> a(n);

  for (int64_t i = 0; i < n; i++)
    cin >> a[i][0];

  for (int64_t i = 0; i < n; i++)
    cin >> a[i][1];

  vector<int64_t> delta(n);

  for (int64_t i = 0; i < n; i++)
    delta[i] = a[i][1] - a[i][0];

  sort(delta.begin(), delta.end());
  int64_t wins = 0;

  for (int64_t i = 0; i < n; i++) {
    if (delta[i] < 0) {
      wins++;
    } else {
      if (delta[i] + 1 <= x) {
        wins++;
        x -= delta[i] + 1;
      }
    }
  }

  cout << (wins > n / 2 ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
