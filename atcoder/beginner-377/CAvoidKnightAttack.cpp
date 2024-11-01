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

#define dbg(...) do { cerr << "[" << #__VA_ARGS__ << "]: "; debug_out(__VA_ARGS__); cerr << endl; } while (0)

const vector<pair<int64_t, int64_t>> moves = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int64_t n, m;
  cin >> n >> m;
  map<pair<int64_t, int64_t>, bool> seen;
  int64_t cnt = 0;

  for (int i = 0; i < m; i++) {
    int64_t a, b;
    cin >> a >> b;

    if (!seen[make_pair(a, b)]) {
      seen[make_pair(a, b)] = true;
      cnt++;
    }

    for (auto move : moves) {
      int64_t x = a + move.first, y = b + move.second;

      if (x <= n && x > 0 && y <= n && y > 0 && !seen[make_pair(x, y)]) {
        seen[make_pair(x, y)] = true;
        cnt++;
      }
    }
  }

  cout << (n * n - cnt) << '\n';

  return 0;
}
