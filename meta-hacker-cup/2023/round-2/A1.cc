#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

const vector<pair<int, int>> d4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

set<pair<int, int>> count_blank;
int R, C;

bool bound(int i, int j) {
  return i < R && j < C && i >= 0 && j >= 0;
}

void dfs(vector<string>& grid, int i, int j, vector<vector<bool>>& vis) {
  vis[i][j] = true;
  for (auto d : d4) {
    if (bound(i + d.first, j + d.second)) {
      if (grid[i + d.first][j + d.second] == '.')
        count_blank.insert({i + d.first, j + d.second});

      if (!vis[i + d.first][j + d.second] && grid[i + d.first][j + d.second] == 'W')
          dfs(grid, i + d.first, j + d.second, vis);
    }
  }
}

void solve() {
  cin >> R >> C;
  vector<string> grid(R);

  for (string &s : grid)
    cin >> s;

  count_blank.clear();

  vector<vector<bool>> vis(R, vector<bool> (C, false));

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (grid[i][j] == 'W' && !vis[i][j]) {
        dfs(grid, i, j, vis);

        if (len(count_blank) == 1) {
          print("YES");
          return;
        }
        else count_blank.clear();
      }
    }
  }

  print("NO");
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
