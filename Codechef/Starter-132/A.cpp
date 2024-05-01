#include <bits/stdc++.h>
using namespace std;

void solve() {
  int X;
  cin >> X;

  cout << (100 - (X % 10 == 0 ? X : X + 10 - X % 10)) << '\n';
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
