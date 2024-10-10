#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  cin >> n;

  cout << (n & 1 ? n / 2 + 1 : n / 2) << ' ' << (n % 3 == 0 ? n / 3 : n / 3 + 1);
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
