#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N, M;
  cin >> N >> M;
  vector<vector<long long>> graph(N);

  for (long long i = 0; i < M; i++) {
    long long u, v;
    cin >> u >> v;
    u--, v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  vector<long long> vis(N, false);
  set<pair<long long, long long>> edges;
  long long len = 0;

  function<void(long long)> dfs = [&](long long src) -> void {
    vis[src] = true;
    len++;

    for (long long i : graph[src]) {
      edges.insert({min(src, i), max(src, i)});
      if (!vis[i])
        dfs(i);
    }
  };

  long long ans = 0;

  for (long long i = 0; i < N; i++) {
    if (!vis[i]) {
      len = 0;
      edges.clear();
      dfs(i);
      ans += (len * (len - 1LL)) / 2LL - (long long)edges.size();
    }
  }

  cout << ans << '\n';

  return 0;
}
