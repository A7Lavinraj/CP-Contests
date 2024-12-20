#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);
  int odd = 0;

  for (int i = 0; i < n; i++)
    cin >> a[i], odd += a[i] % 2;

  int even = n - odd;
  cout << (odd == 0 ? 0 : even + (odd + 1) / 2) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
