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
#define ll int64_t
#define all(x) (x).begin(), (x).end()

void testcase() {
  int n;
  cin >> n;

  auto Ask = [&](int l, int r) {
    if (r - l <= 1) {
      return 0;
    }

    cout << "? " << l + 1 << " " << r << endl;
    int got;
    cin >> got;
    return got;
  };

  int x = Ask(0, n);

  if (x == 0) {
    cout << "! IMPOSSIBLE" << endl;
    return;
  }

  string s = "";

  for (int i = 0; i < n; i++) {
    int y = Ask(i + 1, n);

    if (y == x) {
      s += "1";
    } else {
      s += "0";

      if (y == 0) {
        s += string(x, '1');
        s.resize(n, '0');
        break;
      }

      x = y;
    }
  }

  cout << "! " << s << endl;
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
