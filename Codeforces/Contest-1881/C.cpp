#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int N;
  cin >> N;
  vector<string> grid(N);
  vector<vector<char>> alt(N, vector<char>(N));

  for (string &s : grid)
    cin >> s;

  int operation = 0;
  print();

again:
  bool change = false;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      change |= grid[i][j] != grid[N - j - 1][i];
      operation += abs(grid[i][j] - grid[N - j - 1][i]);
      grid[i][j] > grid[N - j - 1][i] ? grid[N - j - 1][i] = grid[i][j] : grid[i][j] = grid[N - j - 1][i];
    }
    print();
  }

  if (change)
    goto again;

  print(operation);
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
