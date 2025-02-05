#include <bits/stdc++.h>

using namespace std;

#define ll int64_t

const vector<pair<int, int>> d4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
ll dp[25][25];

int main() {
  ll n;
  cin >> n;
  vector<vector<char>> grid(n, vector<char>(n));
  memset(dp, -1, sizeof(dp));

  for (ll i = 0; i < n; i++)
    for (ll j = 0; j < n; j++)
      cin >> grid[i][j];

  vector<vector<bool>> vis(n, vector<bool>(n, false));

  auto f = [&](ll i, ll j, ll cost, auto &&self) -> ll {
    vis[i][j] = true;

    if (grid[i][j] == 'E')
      return cost;

    if (dp[i][j] != -1)
      return dp[i][j];

    ll sub_cost = INT_MAX;

    if (i < n && i >= 0 && j + 1 < n && j + 1 >= 0)
      if (!vis[i][j + 1])
        sub_cost = min(sub_cost, self(i, j + 1, cost + ll(!(grid[i][j] == 'T' && grid[i][j + 1] == 'T')), self));

    if (i - 1 < n && i - 1 >= 0 && j < n && j >= 0)
      if (!vis[i - 1][j])
        sub_cost = min(sub_cost, self(i - 1, j, cost + ll(!(grid[i][j] == 'T' && grid[i - 1][j] == 'T')), self));

    if (i < n && i >= 0 && j - 1 < n && j - 1 >= 0)
      if (!vis[i][j - 1])
        sub_cost = min(sub_cost, self(i, j - 1, cost + ll(!(grid[i][j] == 'T' && grid[i][j - 1] == 'T')), self));

    if (i + 1 < n && i + 1 >= 0 && j < n && j >= 0)
      if (!vis[i + 1][j])
        sub_cost = min(sub_cost, self(i + 1, j, cost + ll(!(grid[i][j] == 'T' && grid[i + 1][j] == 'T')), self));

    vis[i][j] = false;
    return dp[i][j] = cost + sub_cost;
  };

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      if (grid[i][j] == 'S') {
        cout << f(i, j, 0, f) << '\n';
        return 0;
      }
    }
  }

  return 0;
}
