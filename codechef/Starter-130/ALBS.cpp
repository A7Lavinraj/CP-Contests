#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;

  for (int i = 0; i < n - 1; i++)
    if (s[i] == s[i + 1])
      cnt++;

  cout << cnt << '\n';
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
