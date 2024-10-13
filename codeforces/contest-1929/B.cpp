#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n, k;
  cin >> n >> k;

  if (4 * n - 2 == k) {
    cout << 2 * n;
  } else {
    cout << (k & 1 ? k / 2 + 1 : k / 2);
  }
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
