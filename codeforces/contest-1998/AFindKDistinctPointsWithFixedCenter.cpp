#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() { 
  int x, y, k;
  cin >> x >> y >> k;

  if (k & 1)
    cout << x << " " << y << "\n";

  for (int i = 1; i <= k / 2; i++)
    cout << x << " " << y - i << '\n' << x << " " << y + i << '\n';
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
