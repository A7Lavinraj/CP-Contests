#include <bits/stdc++.h>

#define ll long long
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int a, b;
  cin >> a >> b;

  cout << (b > a + 2 || a > b + 1 ? "NO" : "YES") << '\n';
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
