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

const char nl = '\n';

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<int, bool> c;

  auto is = [](int x, int i) -> bool {
    return (x == 0 && i & 1) || (x == 1 && !(i & 1));
  };

  for (int i = 0; i < n; i++) {
    if (is(a[i], i)) {
      c[i] = true;
    }
  }

  int q;
  cin >> q;

  while (q--) {
    int p, x;
    cin >> p >> x;
    auto lb = c.lower_bound(p - 1);

    if (lb != c.end()) {
      if (lb->first == p - 1) {
        if (is(p - 1, x))
          c[p - 1] = true;
        else
          c.erase(lb);
      }
    }

    auto ub = c.upper_bound(p - 1);

    if (ub == c.end()) {
      cout << x << nl;
    } else {
      if (ub->first & 1) {
        cout << 0 << nl;
      } else {
        cout << 1 << nl;
      }
    }
  }
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
