#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  long long N, K, PB, PS;
  cin >> N >> K >> PB >> PS;
  vector<long long> A(N), P(N);
  PB--, PS--;

  for (long long i = 0; i < N; i++)
    cin >> P[i], P[i]--;

  for (long long i = 0; i < N; i++)
    cin >> A[i];

  vector<long long> a(N, 0), b(N, 0);
  long long sum_a = 0, sum_b = 0;

  for (long long i = K; i > 0; i--) {
    if (a[PB] != 0 && b[PS] != 0)
      break;

    if (a[PB] == 0) {
      a[PB] = i * A[PB] + sum_a;
      sum_a = sum_a + A[PB];
    }

    if (b[PS] == 0) {
      b[PS] = i * A[PS] + sum_b;
      sum_b = sum_b + A[PS];
    }

    PB = P[PB];
    PS = P[PS];
  }

  long long max_a = *max_element(a.begin(), a.end());
  long long max_b = *max_element(b.begin(), b.end());

  cout << (max_a == max_b ? "Draw" : max_a > max_b ? "Bodya" : "Sasha") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    testcase();
    // cout << "Case #" << i << ": ";
  }

  return 0;
}
