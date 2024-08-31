#include <bits/stdc++.h>
using namespace std;

int64_t pairs(int64_t len) {
  return (len * (len + 1)) / 2LL;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int64_t N;
  cin >> N;
  vector<int64_t> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  if (N == 1) {
    cout << 1 << "\n";
    return 0;
  }

  int64_t low = 0, high = 1, delta = A[1] - A[0];
  int64_t ans = 0, previous = -1;

  while (high < N) {
    while (A[high + 1] - A[high] == delta && high + 1 < N)
      high++;

    ans += pairs(high - low + 1) - int64_t(previous == low);
    previous = high;
    low = high, high = high + 1;
    delta = A[high] - A[low];
  }

  cout << ans << '\n';

  return 0;
}
