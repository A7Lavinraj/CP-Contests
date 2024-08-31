#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N;
  cin >> N;
  vector<int> A(N);
  
  for (int i = 0; i < N; ++i)
    cin >> A[i];

  int left = 0, right = N - 1;

  while (left < N && A[left] <= 0)
    left++;

  while (right >= 0 && A[right] <= 0)
    right--;

  int cnt = 0;

  for (int i = left; i <= right; i++)
    cnt += int(A[i] < 0);

  cout << cnt << '\n';
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
