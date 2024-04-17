#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  cin >> n;

  cout << (n < 127 ? "NO" : "YES") << '\n';
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
