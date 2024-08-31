#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K;
  cin >> N >> K;
  vector<vector<int>> graph(N);
  vector<int> specific(K);

  for (int i = 0; i < N - 1; i++) {
    int u, v;
    cin >> u >> v, u--, v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for (int i = 0; i < K; i++)
    cin >> specific[i];

  vector<bool> visited(N, false);
  vector<int> parent(N, -1);

  function<void(int)> dfs = [&](int src) -> void {
    visited[src] = true;

    for (int child : graph[src]) {
      parent[child] = src;
      dfs(child);
    }
  };

  dfs(specific[0]);

  return 0;
}
