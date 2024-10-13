#include <bits/stdc++.h>
using namespace std;

void testcase() {
  long long L, R;
  cin >> L >> R;
  long long low = 0, high = 1e9;

  while (high - low > 1) {
    long long mid = low + (high - low) / 2LL;

    if (L + ((mid * (mid - 1)) / 2) <= R) {
      low = mid;
    } else {
      high = mid;
    }
  }

  cout << low << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
