#include <bits/stdc++.h>
using namespace std;

int ceil(int A, int B) {
  return A / B + int(A % B != 0);
}

void testcase() {
  int X, Y, K;
  cin >> X >> Y >> K;

  if (X <= Y) {
    cout << (2 * ceil(max(X, Y),  K)) << '\n';
  } else {
    cout << (2 * ceil(max(X, Y), K) - int(ceil(X, K) != ceil(Y, K))) << '\n';
  }
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
