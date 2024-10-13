#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  vector<vector<int>> grid(N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 1 + i; j++) {
      int value;
      cin >> value;
      grid[i].push_back(value);
    }
  }

  int start = 1;

  for (int i = 1; i <= N; i++) {
    if (start >= i) {
      start = grid[start - 1][i - 1];
    } else {
      start = grid[i - 1][start - 1];
    }
  }

  cout << start << '\n';

  return 0;
}
