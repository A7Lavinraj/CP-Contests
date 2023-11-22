#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...)
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i];

  int total = 0;

  for (int i = 0; i < N; i++)
    total ^= v[i];

  int ans = total;

  for (int i = 0; i < N; i++) {
    ans = min(ans, total ^ v[i]);
  }

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
