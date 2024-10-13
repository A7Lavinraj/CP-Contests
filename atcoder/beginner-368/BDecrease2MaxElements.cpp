#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  auto enough = [&]() -> bool {
    int cnt = 0;

    for (int i = 0; i < N; i++)
      if (A[i] > 0)
        cnt++;

    return cnt <= 1;
  };

  int operations = 0;

  while (!enough()) {
    sort(A.begin(), A.end(), greater<int>());
    A[0]--, A[1]--;
    operations++;
  }

  cout << operations << '\n';

  return 0;
}
