#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  vector<string> grid(H);

  for (int i = 0; i < H; i++)
    cin >> grid[i];

  string S;
  cin >> S;
  X--, Y--;

  auto move_left = [&](int &a, int &b) -> void {
    if (b - 1 < 0)
      return;

    if (grid[a][b - 1] == '#')
      return;

    b--;
  };

  auto move_up = [&](int &a, int &b) -> void {
    if (a - 1 < 0)
      return;

    if (grid[a - 1][b] == '#')
      return;

    a--;
  };

  auto move_right = [&](int &a, int &b) -> void {
    if (b + 1 >= W)
      return;

    if (grid[a][b + 1] == '#')
      return;

    b++;
  };

  auto move_down = [&](int &a, int &b) -> void {
    if (a + 1 >= H)
      return;

    if (grid[a + 1][b] == '#')
      return;

    a++;
  };

  for (int i = 0; i < len(S); i++) {
    if (S[i] == 'L')
      move_left(X, Y);

    if (S[i] == 'U')
      move_up(X, Y);

    if (S[i] == 'R')
      move_right(X, Y);

    if (S[i] == 'D')
      move_down(X, Y);
  }

  cout << X + 1 << " " << Y + 1 << '\n';

  return 0;
}
