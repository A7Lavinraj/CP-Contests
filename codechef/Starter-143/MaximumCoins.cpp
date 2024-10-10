#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, x;
  cin >> n >> x;
  int sum = 0;

  for (int i = 1; i <= n - x; i++)
    sum -= (1 << i);

  for (int i = n - x + 1; i <= n; i++)
    sum += (1 << i);

  cout << sum << '\n';
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
