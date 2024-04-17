#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;


void solve() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  const vector<array<int, 2>> dir = {{a, b}, {b, a}, {-a, -b}, {-b, -a}, {-a, b}, {a, -b}, {-b, a}, {b, -a}};
  map<pair<int, int>, int> moves;

  for (auto it : dir) {
    moves[{c + it[0], d + it[1]}]++;
  }

  int mx = -1;

  for (auto it : dir) {
    moves[{e + it[0], f + it[1]}]++;
    mx = max(mx, moves[{e + it[0], f + it[1]}]);
  }

  int ans = 0;

  for (auto it : moves)
    ans += it.second == mx && mx != 1 && it.first != make_pair(c, d) && it.first != make_pair(e, f);

  cout << ans << '\n';
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
