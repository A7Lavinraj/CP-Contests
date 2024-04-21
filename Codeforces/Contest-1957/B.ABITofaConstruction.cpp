#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K;
  cin >> N >> K;
  int pow = 1;

  while (pow * 2 <= K)
    pow *= 2;

  if (N == 1)
    cout << K << '\n';
  else {
    cout << pow - 1 << ' ' << K - pow + 1 << " ";

    for (int i = 0; i < N - 2; i++) {
      cout << 0 << " ";
    }

    cout << '\n';
  }
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
