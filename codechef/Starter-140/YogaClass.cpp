#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n, a, b;
  cin >> n >> a >> b;

  cout << (2 * a < b ? n / 2 * b + n % 2 * a : n * a) << '\n';
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
