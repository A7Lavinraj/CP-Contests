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

const vector<array<int, 2>> d4 = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int h, w, k;
  cin >> h >> w >> k;
  vector<string> grid(h);

  for (string &s : grid)
    cin >> s;

  int cnt = 0;
  vector<vector<bool>> vis(h, vector<bool>(w, false));

  auto f = [&](int i, int j, int k, auto &&self) -> void {
    if (k == 0) {
      cnt++;
      return;
    }

    vis[i][j] = true;

    for (auto d : d4) {
      int x = i + d[0], y = j + d[1];

      if (x < h && x >= 0 && y < w && y >= 0) {
        if (grid[x][y] == '.' && !vis[x][y])
          self(x, y, k - 1, self);
      }
    }

    vis[i][j] = false;
  };

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (grid[i][j] == '.') {
        f(i, j, k, f);
      }
    }
  }

  cout << cnt << '\n';

  return 0;
}
