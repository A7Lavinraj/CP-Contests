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
  vector<int64_t> a(n);

  for (int64_t i = 0; i < n; i++)
    cin >> a[i];

  vector<pair<int64_t, int64_t>> updated = {{a[0], 0}};

  for (int64_t i = 1; i < n; i++) {
    if (a[i] >= updated.back().first) {
      updated.push_back({a[i], updated.size()});
    }
  }

  sort(updated.begin(), updated.end());
  int64_t ans = INT_MAX;

  for (int i = updated.size() - 2; i >= 0; i--)
    if (updated[i].first == updated[i + 1].first)
      updated.pop_back();
    else break;

  for (int i = 0; i < updated.size(); i++) {
    ans = min(ans, updated[i].second + int64_t(updated.size()) - i - 1);
  }
  
  cout << ans << '\n';
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