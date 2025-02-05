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

bool is_palindrome(string s) {
  int l = 0, r = (int)s.size() - 1;

  while (l < r) {
    if (s[l] != s[r])
      return false;

    l++, r--;
  }

  return true;
}

bool is_alternate(string s) {
  if ((int)s.size() & 1)
    return false;

  if ((int)set<char>(s.begin(), s.end()).size() != 2)
    return false;

  int l = 0, r = (int)s.size() - 1;

  while (l < r) {
    if (s[l] == s[r])
      return false;

    l++, r--;
  }

  return true;
}

void testcase() {
  int n;
  string s;
  cin >> n >> s;

  if (s.size() == 2 && s[0] != s[1]) {
    cout << -1 << '\n';
    return;
  }

  if (is_alternate(s)) {
    cout << -1 << '\n';
    return;
  }

  cout << (is_palindrome(s) ? 0 : 1) << '\n';
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
