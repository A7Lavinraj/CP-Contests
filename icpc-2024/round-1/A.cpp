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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  auto _bit = [](int x, int i) -> int {
    return (x >> i) & 1;
  };

  for (int i = 0; i < n; i++) {
    bool status_1 = true;

    for (int bit = 0; bit < 30; bit++) {
      if (_bit(a[i], bit) == 0 && _bit(k, bit) == 1) {
        status_1 = false;
        break;
      }
    }

    if (!status_1)
      continue;

    vector<int> ans = {i + 1};
    int tmp = a[i];

    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;

      tmp = tmp & a[j];
      bool status_2 = true;

      for (int bit = 0; bit < 30; bit++) {
        if (_bit(tmp, bit) == 0 && _bit(k, bit) == 1) {
          status_2 = false;
          break;
        }
      }

      if (status_2)
        ans.push_back(j + 1);
    }

    if (tmp == k) {
      cout << "YES" << nl;
      cout << (int)ans.size() << nl;

      for (int x : ans)
        cout << x << " ";

      cout << nl;
      return;
    }
  }

  cout << "NO" << nl;
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
