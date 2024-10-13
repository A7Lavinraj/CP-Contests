#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;

  if (n % 2 == 0)
    cout << -1 << '\n';
  else {
    int low = 0, high = n - 1;
    vector<int> perm(n);

    for (int i = n; i >= 1; i--) {
      if (i & 1)
        perm[low++] = i;
      else
        perm[high--] = i;
    }

    for (int i = 0; i < n; i++)
      cout << perm[i] << " \n"[i == n - 1];
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
