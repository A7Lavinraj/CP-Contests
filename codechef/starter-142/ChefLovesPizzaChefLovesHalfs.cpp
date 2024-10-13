#include <bits/stdc++.h>

#define ll long long
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  cin >> n;
  int closest = 1;

  while ((1 << closest) < n)
    closest++;

  if ((1 << closest) == n)
    cout << 0 << '\n';
  else
    cout << ((1 << closest) - 2 * ((1 << closest) - n)) << '\n';
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
