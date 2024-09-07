#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  int sum = 0;

  for (int i = 0; i < K; i++)
    sum += A[i];

  for (int i = K; i < N - 1; i++)
    cout << A[i] << " ";

  cout << A[N - 1] + sum << '\n';
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
