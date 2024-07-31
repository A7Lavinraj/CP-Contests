#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<string> grid(2);

  for (int i = 0; i < 2; i++)
    cin >> grid[i];

  if (count(grid[0].begin(), grid[0].end(), 'x') +
          count(grid[1].begin(), grid[1].end(), 'x') ==
      2 * n) {
    cout << 0 << '\n';
  } else {
    int cnt = 0;

    for (int j = 1; j < n - 1; j++)
      if (grid[0][j] == '.' && grid[0][j - 1] == '.' && grid[0][j + 1] == '.' &&
          grid[1][j] == '.' && grid[1][j - 1] == 'x' && grid[1][j + 1] == 'x')
        cnt++;

    for (int j = 1; j < n - 1; j++)
      if (grid[1][j] == '.' && grid[1][j - 1] == '.' && grid[1][j + 1] == '.' &&
          grid[0][j] == '.' && grid[0][j - 1] == 'x' && grid[0][j + 1] == 'x')
        cnt++;

    cout << cnt << '\n';
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
