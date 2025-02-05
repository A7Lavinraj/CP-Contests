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
  int n, m, l;
  cin >> n >> m >> l;
  vector<pair<int, int>> interval(n);

  for (int i = 0; i < n; i++)
    cin >> interval[i].first >> interval[i].second;

  sort(all(interval));
  map<int, vector<int>> pu;

  for (int i = 0; i < m; i++) {
    int x, v;
    cin >> x >> v;
    int id = int(lower_bound(all(interval), make_pair(x, 0)) - interval.begin());
    pu[id].push_back(v);
  }

  priority_queue<int> pq;
  pair<ll, int> ans = {1, 0};

  for (int i = 0; i < n; i++) {
    for (int p : pu[i])
      pq.push(p);

    ll limit = interval[i].second - interval[i].first + 2;
    
    while (!pq.empty() && ans.first < limit) {
      ans.first += ll(pq.top());
      ans.second++;
      pq.pop();
    }

    if (ans.first < limit) {
      cout << -1 << '\n';
      return;
    }
  }

  cout << ans.second << '\n';
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
