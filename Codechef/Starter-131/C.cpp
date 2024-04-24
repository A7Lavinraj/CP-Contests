#include <bits/stdc++.h>
using namespace std;

const int MOD = int(1e9) + 7;

void solve() {
  long long N;
  cin >> N;
  vector<long long> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  sort(a.begin(), a.end());
  long long sum = 0;

  for (int i = 0; i < N; i++) {
    if (sum * a[i] > sum + a[i])
      sum = (sum * a[i]) % MOD;
    else
      sum = (sum + a[i]) % MOD;
  }

  cout << sum << '\n';
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
