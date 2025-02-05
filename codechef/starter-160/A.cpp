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

template <typename T, typename T_iterable> std::vector<std::pair<T, int>> run_length_encoding(T_iterable &items) {
  std::vector<std::pair<T, int>> encoding;
  T character = items[0];
  int count = 0;

  for (char &item : items) {
    if (character == item) {
      count++;
    } else {
      encoding.emplace_back(character, count);
      count = 1;
      character = item;
    }
  }

  encoding.emplace_back(character, count);

  return encoding;
}

void testcase() {
  int n, m;
  string s, t;
  cin >> n >> m >> s >> t;
  int cs = (int)count(s.begin(), s.end(), 'a');
  int ct = (int)count(t.begin(), t.end(), 'a');
  int csb = 0, ctb = 0;

  for (int i = 0; s[i] != 'a'; i++)
    csb++;

  for (int i = 0; t[i] != 'a'; i++)
    ctb++;

  cout << ((s == t || (cs == ct && cs != 0 && ctb == csb)) ? "Yes" : "No") << '\n';
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
