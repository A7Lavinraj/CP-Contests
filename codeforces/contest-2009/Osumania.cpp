#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N;
  cin >> N;
  vector<string> grid(N);

  for (int i = 0; i < N; i++)
    cin >> grid[i];

  for (int i = N - 1; i >= 0; i--)
    cout << int(find(grid[i].begin(), grid[i].end(), '#') - grid[i].begin()) + 1 << " \n"[i == 0];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
