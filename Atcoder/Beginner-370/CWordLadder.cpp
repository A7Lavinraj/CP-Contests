#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string A, B;
  cin >> A >> B;
  vector<string> X;
  int N = A.size();
  vector<vector<int>> hash(26);

  auto operation1 = [&]() -> bool {
    bool status = false;

    for (int i = 0; i < N; i++) {
      if (A[i] > B[i]) {
        A[i] = B[i];
        X.push_back(A);
        status = true;
      }
    }

    return status;
  };

  auto operation2 = [&]() -> bool {
    bool status = false;

    for (int i = N - 1; i >= 0; i--) {
      if (A[i] < B[i]) {
        A[i] = B[i];
        X.push_back(A);
        status = true;
      }
    }

    return status;
  };


  while (operation1())
    ;

  while (operation2())
    ;

  cout << (int)X.size() << '\n';

  for (int i = 0; i < (int)X.size(); i++)
    cout << X[i] << '\n';

  return 0;
}
