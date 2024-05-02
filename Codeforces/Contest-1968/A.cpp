#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int X;
  cin >> X;
  array<int, 2> ans = {0, 0};

  for (int i = 1; i < X; i++) {
    if (ans[0] < __gcd(X, i) + i) {
      ans[0] = __gcd(X, i) + i;
      ans[1] = i;
    }
  }

  cout << ans[1] << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    testcase();
    // cout << "Case #" << i << ": ";
  }

  return 0;
}
