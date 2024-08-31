#include <bits/stdc++.h>
using namespace std;

const long long MOD = (long long)(1e9) + 7;

long long bin(long long a, long long b) {
  a %= MOD;
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return res;
}

void testcase() {
  long long N, K;
  cin >> N >> K;
  vector<long long> A(N);

  for (long long i = 0; i < N; i++)
    cin >> A[i];

  sort(A.begin(), A.end());

  for (long long i = 0; i < N - 1 && K; i++)
    while (A[i] * 2LL <= A[N - 1] && K)
      A[i] = A[i] * 2LL, K--;

  sort(A.begin(), A.end());
  long long ans = 0;

  for (long long i = 0; i < N; i++)
    ans = (ans + (A[i] * bin(2, K / N + (long long)(i < K % N))) % MOD) % MOD;

  cout << ans << '\n';
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
