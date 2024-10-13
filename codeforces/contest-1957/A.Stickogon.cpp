#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> len(N);

  for (int i = 0; i < N; i++)
    cin >> len[i];

  map<int, int> mp;

  for (int i = 0; i < N; i++)
    mp[len[i]]++;

  int ans = 0;

  for (auto itr : mp)
    ans += itr.second / 3;

  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}
