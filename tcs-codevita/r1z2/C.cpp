#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, vector<string>> adj;
  map<string, int> deg;
  
  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    adj[a].push_back(b);

    if (deg[a] == 0)
      deg[a] = 0;

    deg[b]++;
  }

  map<string, int> lvl;
  string root;

  for (auto &it : deg) {
    if (it.second == 0)
      root = it.first;
  }

  auto f = [&](string &node, int l, auto &&self) -> void {
    lvl[node] = l;

    for (auto &it : adj[node]) {
      self(it, l + 1, self);
    }
  };

  f(root, 1, f);

  string str;
  int ans = 0;

  while (cin >> str) {
    if (lvl[str] == 0)
      ans--;
    else
      ans += lvl[str];
  }

  cout << ans << '\n';

  return 0;
}
