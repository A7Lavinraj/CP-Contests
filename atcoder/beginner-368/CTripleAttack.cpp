#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int64_t N;
  cin >> N;
  vector<int64_t> A(N);

  for (int64_t i = 0; i < N; i++)
    cin >> A[i];

  int64_t operations = 0, move = 0;

  auto ops = [](int64_t health) -> int64_t {
    if (health == 1)
      return 1;

    if (health == 2)
      return 2;

    if (health == 3 || health == 4 || health == 5)
      return 3;

    return (health / 5) * 3;
  };

  for (int64_t i = 0; i < N; i++) {
    while (move != 0 && A[i] > 0) {
      if (move == 0 || move == 1)
        A[i] -= 1;
      else
        A[i] -= 3;

      operations++;
      move = (move + 1) % 3;
    }

    if (A[i] <= 0)
      continue;

    operations += ops(A[i]);

    if (A[i] > 5)
      operations += ops(A[i] % 5);

    if (A[i] % 5 == 1)
      move = 1;
    else if (A[i] % 5 == 2)
      move = 2;
    else
      move = 0;
  }

  cout << operations << "\n";

  return 0;
}
