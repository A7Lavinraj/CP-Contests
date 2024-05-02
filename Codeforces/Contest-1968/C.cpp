#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int N;
  cin >> N;
  vector<int> A(N - 1);

  for (int i = 0; i < N - 1; i++)
    cin >> A[i];

  int sum = 501;
  cout << sum << " ";

  for (int i = 0; i < N - 1; i++) {
    cout << A[i] + sum << " ";
    sum += A[i];
  }

  cout << "\n";
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
