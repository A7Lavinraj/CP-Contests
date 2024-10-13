#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K;
  cin >> N >> K;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  for (int i = N - K; i < N; i++)
    cout << A[i] << " ";

  for (int i = 0; i < N - K; i++)
    cout << A[i] << " \n"[i == N - K - 1];

  return 0;
}
