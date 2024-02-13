#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  cin >> n;
  string ans = "aaa";

  n -= 3;

  for (int i = 2; i >= 0; i--) {
    if (n >= 25) {
      ans[i] = 'z';
      n -= 25;
    } else {
      ans[i] = char(n + int('a'));
      n = 0;
    }
  }

  cout << ans;
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
