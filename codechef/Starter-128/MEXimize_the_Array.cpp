#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define len(x) int((x).size())
#define endl '\n'

void solve() {
  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  sort(a.begin(), a.end());
  ll ans = 0;

  for (int i = 0; i < N; i++)
    ans += abs(a[i] - i) + 0LL;

  cout << ans << endl;
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
