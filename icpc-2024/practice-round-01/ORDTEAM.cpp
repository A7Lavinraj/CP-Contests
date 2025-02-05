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

void testcase() {
  vector<array<int, 3>> a(3);

  for (int i = 0; i < 3; i++)
    cin >> a[i][0] >> a[i][1] >> a[i][2];

  sort(a.begin(), a.end(), [](auto x, auto y) -> bool {
      return x[0] <= y[0] && x[1] <= y[1] && x[2] <= y[2];
      });

  for (int i = 0; i < 2; i++) {
    bool first = a[i][0] <= a[i + 1][0] && a[i][1] <= a[i + 1][1] && a[i][2] <= a[i + 1][2];
    bool second = a[i][0] < a[i + 1][0] || a[i][1] < a[i + 1][1] || a[i][2] < a[i + 1][2];

    if (!(first && second)) {
      cout << "no" << '\n';
      return;
    }
  }

  cout << "yes" << '\n';
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
