#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n, m;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;

  int ans = INT_MAX;

  for (int i = 0; i < n - m + 1; i++) {
    int cnt = 0;

    for (int j = 0; j < m; j++) {
      if (a[i + j] != b[j])
        cnt++;
    }

    ans = min(ans, cnt);
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }

  return 0;
}
