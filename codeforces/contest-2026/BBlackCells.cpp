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
  long long n;
  cin >> n;
  vector<long long> a(n);

  for (long long i = 0; i < n; i++)
    cin >> a[i];

  if (n == 1) {
    cout << 1 << "\n";
    return;
  }

  sort(a.begin(), a.end());

  auto f = [](vector<long long> tmp) -> long long {
    long long ans = 0;

    for (long long i = 0; i < tmp.size() - 1; i += 2)
      ans = max(ans, tmp[i + 1] - tmp[i]);

    return ans;
  };

  if (n % 2) {
    pair<long long, long long> maximum = {0, 0};

    for (long long i = 0; i < n - 1; i++)
      if (maximum.second < a[i + 1] - a[i])
        maximum = {i, a[i + 1] - a[i]};

    vector<long long> indices;

    for (long long i = 0; i < n - 1; i++)
      if (maximum.second == a[i + 1] - a[i])
        indices.push_back(i);

    long long ans = LONG_LONG_MAX;

    for (auto i : indices) {
      if (i % 2)
        a.insert(a.begin() + i + 1, a[i + 1] - 1);
      else
        a.insert(a.begin() + i + 1, a[i] + 1);

      ans = min(ans, f(a));
      a.erase(a.begin() + i + 1);
    }

    cout << ans << '\n';

  } else {
    cout << f(a) << '\n';
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
