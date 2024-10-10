#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K;
  cin >> N >> K;
  vector<int> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  int sum = 0;
  sort(a.begin(), a.end());

  for (int i = 0; i < N; i++) {
    if (K > 0) {
      sum += max(a[i], 7 - a[i]);
      K--;
    } else
      sum += a[i];
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
