#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int A, B;
  cin >> A >> B;

  if (A & 1) {
    cout << "NO" << '\n';
    return;
  }

  if ((B % 2) * 2 <= A)
    cout << "YES" << '\n';
  else cout << "NO" << '\n';
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
