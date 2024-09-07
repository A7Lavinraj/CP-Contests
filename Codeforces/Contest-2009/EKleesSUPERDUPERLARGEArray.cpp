#include <bits/stdc++.h>
using namespace std;

long long sum(long long N) {
  return (N * (N + 1)) / 2;
}

long long sum(long long L, long long R) {
  return sum(R) - sum(L - 1);
}

void testcase() {
  long long N, K;
  cin >> N >> K;
  long long low = K, high = K + N - 1;

  while (high - low > 1) {
    long long mid = low + (high - low) / 2LL;

    if ((sum(low, mid) - sum(mid + 1, K + N - 1)) <= 0)
      low = mid;
    else
      high = mid;
  }

  cout << abs(sum(K, low) - sum(low + 1, K + N - 1)) << '\n';
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
