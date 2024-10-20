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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q;
  cin >> n >> q;
  vector<pair<char, int>> ops(q);

  for (int i = 0; i < q; i++)
    cin >> ops[i].first >> ops[i].second, ops[i].second--;

  int L = 0, R = 1;

  auto clock_dist = [&](int src, int dst, int other) {
    int steps = 0;

    while (src != dst && src != other)
      src = (src + 1) % n, steps++;

    return src == other ? -1 : steps;
  };

  auto aclock_dist = [&](int src, int dst, int other) {
    int steps = 0;

    while (src != dst && src != other)
      src = (src - 1 + n) % n, steps++;

    return src == other ? -1 : steps;
  };

  int ans = 0;

  for (int i = 0; i < q; i++) {
    if (ops[i].first == 'L') {
      int clockwise = clock_dist(L, ops[i].second, R);
      int aclockwise = aclock_dist(L, ops[i].second, R);

      if (clockwise == -1 && aclockwise == -1) {
        continue;
      } else if (clockwise == -1) {
        ans += aclockwise;
      } else if (aclockwise == -1) {
        ans += clockwise;
      } else {
        ans += min(clockwise, aclockwise);
      }

      L = ops[i].second;
    } else {
      int clockwise = clock_dist(R, ops[i].second, L);
      int aclockwise = aclock_dist(R, ops[i].second, L);

      if (clockwise == -1 && aclockwise == -1) {
        continue;
      } else if (clockwise == -1) {
        ans += aclockwise;
      } else if (aclockwise == -1) {
        ans += clockwise;
      } else {
        ans += min(clockwise, aclockwise);
      }

      R = ops[i].second;
    }
  }

  cout << ans << '\n';

  return 0;
}
