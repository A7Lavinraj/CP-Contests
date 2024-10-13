#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> ans(n, vector<int>(m, 2));

  if (n == m) {
    for (int i = 0; i < n; i++) {
      ans[i][i] = 3;
    }
  } else if (n < m) {
    int col = 0;

    for (int i = 0; i < n; i++)
      ans[i][col++] = 3;

    while (col < m)
      ans[n - 1][col++] = 3;
  } else {
    int row = 0;

    for (int j = 0; j < m; j++)
      ans[row++][j] = 3;

    while (row < n)
      ans[row++][m - 1] = 3;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cout << ans[i][j] << " ";

    cout << "\n";
  }
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
