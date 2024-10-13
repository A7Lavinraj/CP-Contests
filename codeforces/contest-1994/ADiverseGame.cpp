#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> grid(n, vector<int>(m));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> grid[i][j];

  if (n * m == 1) {
    cout << -1 << '\n';
  } else {
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        grid[i][j] = grid[i][j] % (n * m) + 1;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        cout << grid[i][j] << " ";

      cout << '\n';
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }

  return 0;
}
