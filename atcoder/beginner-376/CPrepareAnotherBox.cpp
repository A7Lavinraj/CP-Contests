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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> toys(n), boxes(n - 1);

  for (int i = 0; i < n; i++)
    cin >> toys[i];

  for (int i = 0; i < n - 1; i++)
    cin >> boxes[i];

  map<int, int> tmp;

  for (int i = 0; i < n; i++)
    tmp[toys[i]]++;

  for (int i = 0; i < n - 1; i++) {
    auto it = tmp.upper_bound(boxes[i]);

    if (it == tmp.begin()) {
      cout << -1 << "\n";
      return 0;
    }

    it = prev(it);
    it->second--;

    if (it->second == 0) {
      tmp.erase(it);
    }
  }

  for (auto [x, y] : tmp)
    cout << x << '\n';

  return 0;
}