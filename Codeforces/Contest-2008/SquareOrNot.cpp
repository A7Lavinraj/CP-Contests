#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N;
  string S;
  cin >> N >> S;
  int n = (int)sqrt(N);

  if (n * n != N) {
    cout << "No" << '\n';
    return;
  }

  vector<vector<char>> matrix(n, vector<char>(n));
  int index = 0;

  for (int i = 0; i * i < N; i++) {
    for (int j = 0; j * j < N; j++) {
      matrix[i][j] = S[index++];
    }
  }

  bool good = true;

  for (int i = 0; i * i < N; i++)
    if (matrix[0][i] == '0') {
      good = false;
      break;
    }

  for (int i = 0; i * i < N; i++)
    if (matrix[n - 1][i] == '0') {
      good = false;
      break;
    }

  for (int i = 0; i * i < N; i++)
    if (matrix[i][0] == '0') {
      good = false;
      break;
    }

  for (int i = 0; i * i < N; i++)
    if (matrix[i][n - 1] == '0') {
      good = false;
      break;
    }

  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (matrix[i][j] == '1') {
        good = false;
        goto done;
      }
    }
  }

done:
  cout << (good ? "Yes" : "No") << '\n';
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
