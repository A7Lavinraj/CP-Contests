#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int N, M;
  string A, B;
  cin >> N >> M >> A >> B;
  int low = 0, high = 0;

  while (low < N && high < M) {
    while (high < M && B[high] != A[low])
      high++;

    if (A[low] == B[high])
      low++;

    high++;
  }

  cout << low << '\n';
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
