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

void testcase() {
  int64_t n;
  cin >> n;
  vector<int64_t> a(n), b(n);

  for (int64_t i = 0; i < n; i++)
    cin >> a[i];

  for (int64_t i = 0; i < n; i++)
    cin >> b[i];

  int64_t sum = 0;

  for (int64_t i = 0; i < n; i++)
    sum += min(a[i], b[i]);

  int64_t cnt = 0;

  for (int64_t i = 0; i < n; i++)
    cnt += int64_t(a[i] <= b[i]);

  int64_t ans = 0;

  if (cnt == 1) {
    int64_t index = 0;

    for (int64_t i = 0; i < n; i++)
      if (a[i] <= b[i]) {
        index = i;
        break;
      }

    for (int64_t i = 0; i < n; i++) {
      if (i == index)
        continue;

      ans = max(sum - min(a[i], b[i]) - min(a[index], b[index]) + a[i] + b[i], sum - min(a[i], b[i]) - min(a[index], b[index]) + a[index] + b[index]);
    }
  }

  cout << max(ans, sum) << '\n';
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
