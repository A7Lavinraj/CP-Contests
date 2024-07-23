#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, k;
  cin >> n >> k;

  if (k == 0) {
    cout << 0 << '\n';
  } else {
    int cnt = 1, size = n - 1;
    k -= n;

    while (k > 0) {
      if (k > 0) {
        k -= size;
        cnt++;
      }

      if (k > 0) {
        k -= size;
        cnt++;
      }

      size--;
    }

    cout << cnt << '\n';
  }
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
