#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int X, Y;
  cin >> X >> Y;

  cout << min(X, Y) << " " << max(X, Y) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase(); cout << '\n';
  }

  return 0;
}
