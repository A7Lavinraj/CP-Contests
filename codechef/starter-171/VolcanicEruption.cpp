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
  int n, p;
  cin >> n >> p;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> left(n, -1), right(n, -1);
  int maximum = 0;
  bool have = false;

  for (int i = 0; i < n; i++) {
    maximum = max(maximum, a[i]);

    if (have) {
      left[i] = (maximum + p - 1) / p;
    }

    if (a[i] == 0) {
      maximum = 0;
      have = true;
    }
  }

  maximum = 0;
  have = false;

  for (int i = n - 1; i >= 0; i--) {
    maximum = max(maximum, a[i]);

    if (have) {
      right[i] = (maximum + p - 1) / p;
    }

    if (a[i] == 0) {
      maximum = 0;
      have = true;
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      cout << 0 << " ";
      continue;
    }

    if (left[i] == -1) {
      cout << right[i] << " ";
      continue;
    }

    if (right[i] == -1) {
      cout << left[i] << " ";
      continue;
    }

    cout << min(left[i], right[i]) << " ";
  }

  cout << nl;
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
