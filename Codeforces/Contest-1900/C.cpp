#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

int64_t dfs(vector<array<int64_t, 2>>& tree, string& S, int64_t source, int64_t cnt) {
  if (tree[source][0] == 0 && tree[source][1] == 0)
    return cnt;

  int64_t ans = 1e18;

  if (tree[source][0] != 0)
    ans = min(ans, dfs(tree, S, tree[source][0], cnt + (S[source - 1] == 'U' || S[source - 1] == 'R')));
  if (tree[source][1] != 0)
    ans = min(ans, dfs(tree, S, tree[source][1], cnt + (S[source - 1] == 'U' || S[source - 1] == 'L')));

  return ans;
}

void solve() {
  int64_t N;
  string S;
  cin >> N >> S;

  vector<array<int64_t, 2>> tree(N + 1);

  for (int64_t i = 0; i < N; i++) {
    int64_t l, r;
    cin >> l >> r;

    tree[i + 1] = {l, r};
  }

  cout << dfs(tree, S, 1, 0) << '\n';
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
