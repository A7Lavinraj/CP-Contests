#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  int minimum = *min_element(a.begin(), a.end());

  cout << ((a[0] == minimum && a[N - 1] == minimum) ? "Yes" : "No") << '\n';
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
