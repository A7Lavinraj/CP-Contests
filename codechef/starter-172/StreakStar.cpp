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
  int n, x;
  cin >> n >> x;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  int streak = 1, cnt = 1;
  int prev = -1;
  bool move = true;

  for (int i = 1; i < n; i++) {
    if (a[i] >= a[i - 1]) {
      cnt++;
      streak = max(streak, cnt);
      continue;
    }


    if (a[i] * x >= a[i - 1] && move) {
      a[i] = a[i] * x;
      cnt++, move = false;
      prev = i;
      streak = max(streak, cnt);
      continue;
    }

    streak = max(streak, cnt);
    move = true;
    cnt = 1;

    if (prev != -1) {
      a[prev] = a[prev] / x;
      i = prev;
      prev = -1;
    }
  }

  cout << streak << nl;
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
