#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  cout << (n == 1 ? "ALICE" : "BOB") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
