#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N, K;
  string A, B;
  cin >> N >> K >> A >> B;

  if (A == B) {
    cout << 0 << '\n';
    return;
  }

  int last = N - 1;

  while (A[last] == B[last])
    last--;

  bool case1 = true, case2 = true;
  last = min(last + 1, N - K);

  for (int i = last + 1; i < N; i++)
    if (A[i] != B[i]) {
      case1 = false;
      break;
    }

  for (int i = last; i < N - 1; i++)
    if (B[i] != B[i + 1]) {
      case2 = false;
      break;
    }

  if (!case1 && !case2) {
    cout << -1 << '\n';
    return;
  }

  vector<pair<int, char>> ops;

  for (int i = 0; i < last - K + 1; i++)
    ops.emplace_back(i + 1, B[i]);

  if (!case1) {
    for (int i = last; i < N - K + 1; i++)
      ops.emplace_back(i + 1, B[i]);
  }

  if ((int)ops.size() > 2 * N) {
    cout << -1 << '\n';
    return;
  }

  cout << (int)ops.size() << '\n';

  for (int i = 0; i < (int)ops.size(); i++)
    cout << ops[i].first << " " << ops[i].second << "\n";
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
