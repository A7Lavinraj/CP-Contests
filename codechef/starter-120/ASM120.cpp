#include <bits/stdc++.h>
using namespace std;

int recurse(int x, int y) {
  if (x == 0 || y == 0)
    return max(x, y);
  else if (x > y)
    return recurse(x % y, y);
  else 
    return recurse(y % x, x);
}

void testcase() { 
  int x, y;
  cin >> x >> y;

  cout << recurse(x, y) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
