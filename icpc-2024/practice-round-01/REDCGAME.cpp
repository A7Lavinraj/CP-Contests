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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());
  int low = 0, high = n - 2;

  for (int i = 0; i < n; i++)
    if (a[low] > k) {
      low = i;
      break;
    }

  while (low < high) {
    int delta = max(min(a[low], a[high]) - k, 0);
    a[low] = a[low] - delta;
    a[high] = a[high] - delta;

    if (a[low] <= k)
      low++;

    if (a[high] <= k)
      high--;
  }

  if (a[low] > k && low == high) {
    int delta = max(0, min(a[low], a[n - 1]) - k);
    a[low] = a[low] - delta;
    a[n - 1] = a[n - 1] - delta;
  }

  cout << accumulate(a.begin(), a.end(), 0LL) << '\n';
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
