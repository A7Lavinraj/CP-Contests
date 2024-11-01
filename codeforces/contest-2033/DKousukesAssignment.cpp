#include <bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
  os << "[";
  for (int i = 0; i < v.size(); i++) {
    if (i > 0)
      os << ", ";
    os << v[i];
  }
  os << "]";
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const set<T> &s) {
  os << "{";
  for (auto it = s.begin(); it != s.end(); ++it) {
    if (it != s.begin())
      os << ", ";
    os << *it;
  }
  os << "}";
  return os;
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const map<K, V> &m) {
  os << "{";
  for (auto it = m.begin(); it != m.end(); ++it) {
    if (it != m.begin())
      os << ", ";
    os << it->first << ": " << it->second;
  }
  os << "}";
  return os;
}

template <typename T> void debug_out(T val) { cerr << val; }

template <typename T, typename... Args> void debug_out(T val, Args... args) {
  cerr << val << " ";
  debug_out(args...);
}

#define dbg(...)                                                               \
  do {                                                                         \
    cerr << "[" << #__VA_ARGS__ << "]: ";                                      \
    debug_out(__VA_ARGS__);                                                    \
    cerr << endl;                                                              \
  } while (0)

vector<pair<int, int>> findSubArrays(vector<int> arr, int n) {
  unordered_map<int, vector<int>> map;
  vector<pair<int, int>> out;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];

    if (sum == 0)
      out.push_back(make_pair(0, i));

    if (map.find(sum) != map.end()) {
      vector<int> vc = map[sum];

      for (auto it = vc.begin(); it != vc.end(); it++)
        out.push_back(make_pair(*it + 1, i));
    }

    map[sum].push_back(i);
  }

  return out;
}

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<pair<int, int>> output = findSubArrays(a, n);
  sort(output.begin(), output.end(), [](auto x, auto y) -> bool {
    if (x.second - x.first == y.second - y.first)
      return x.first < y.first;

    return x.second - x.first < y.second - y.first;
  });

  int index = 0, ans = 0;

  for (int i = 1; i < output.size(); i++) {
    if (output[index].second < output[i].first)
      index = i, ans++;
  }

  cout << ans + 1 << '\n';
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
