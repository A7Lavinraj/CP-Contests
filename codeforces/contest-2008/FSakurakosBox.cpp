#include <bits/stdc++.h>
using namespace std;

const long long MOD = (long long)(1e9) + 7;

long long gcdExtended(long long a, long long b, long long *x, long long *y);

long long modInverse(long long b, long long m) {
  long long x, y;
  long long g = gcdExtended(b, m, &x, &y);

  if (g != 1)
    return -1;

  return (x % m + m) % m;
}

long long modDivide(long long a, long long b, long long m) {
  a = a % m;
  long long inv = modInverse(b, m);
  assert(inv != -1);
  return (inv * a) % m;
}

long long gcdExtended(long long a, long long b, long long *x, long long *y) {
  if (a == 0) {
    *x = 0, *y = 1;
    return b;
  }

  long long x1, y1;
  long long gcd = gcdExtended(b % a, a, &x1, &y1);
  *x = y1 - (b / a) * x1;
  *y = x1;

  return gcd;
}

void testcase() {
  long long N;
  cin >> N;
  vector<long long> A(N);

  for (long long i = 0; i < N; i++)
    cin >> A[i];

  vector<long long> pre(N + 1, 0);

  for (int i = 0; i < N; i++)
    pre[i + 1] = pre[i] + A[i];

  long long numerator = 0; 

  for (int i = 0; i < N; i++)
    numerator = (numerator + (A[i] * ((pre[N] - pre[i + 1]) % MOD)) % MOD) % MOD;

  long long denominator = ((N * (N - 1)) / 2) % MOD;
  cout << modDivide(numerator, denominator, MOD) << '\n';
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
