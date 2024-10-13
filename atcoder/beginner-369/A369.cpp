#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int A, B;
  cin >> A >> B;
  vector<int> C(3);
  int cnt = 0;

  for (int i = A - 1000; i <= B + 1000; i++) {
    C = {A, B, i};
    sort(C.begin(), C.end());

    if (C[1] - C[0] == C[2] - C[1])
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
