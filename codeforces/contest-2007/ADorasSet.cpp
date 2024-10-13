#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int L, R;
  cin >> L >> R;
  int cnt = 0;

  for (int i = L; i <= R; i++)
    if (i % 2)
      cnt++;

  cout << cnt / 2 << '\n';
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
