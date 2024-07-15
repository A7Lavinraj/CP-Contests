#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, k;
  cin >> n >> k;
  int cnt = 0;

  while (n > k) {
    n -= k - 1;
    cnt++;
  }

  cout << (n > 1 ? cnt + 1 : cnt) << '\n';
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
