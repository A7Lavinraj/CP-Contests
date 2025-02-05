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

#define dd(...) cerr << "[" << #__VA_ARGS__ << "]: "; debug_out(__VA_ARGS__); cerr << endl;
#define ll int64_t
#define all(x) (x).begin(), (x).end()

const char nl = '\n';

void testcase() {
  string a, b;
  cin >> a >> b;
  ll n = a.size();
  ll m = b.size();

  if (n < m || (n == m && a != b)) {
    cout << -1 << nl;
    return;
  }

  ll tracker = m - 1;
  vector<ll> indices;

  for (ll i = n - 1; i >= 0 && tracker >= 0; i--) {
    if (a[i] == b[tracker]) {
      tracker--;
      indices.push_back(i);
    }
  }

  if (tracker != -1) {
    cout << -1 << nl;
    return;
  }

  sort(all(indices));
  ll ans = 0, pos = 1, prev = 0;

  for (ll i = 0; i < (ll)indices.size(); i++) {
    ans += pos * (indices[i] - prev);
    pos++, prev = indices[i] + 1;
  }

  if (n - 1 > indices.back()) {
    ans += pos * (n - indices.back() - 1);
  }

  cout << ans << nl;
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
