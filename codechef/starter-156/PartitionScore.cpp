#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int64_t n, k;
  cin >> n >> k;
  vector<int64_t> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  sort(a.begin(), a.end());

  if (k == 1) {
    cout << (a[n - 1] + a[n - k] + a[0] + a[n - 2]) << '\n';
  } else {
    cout << (a[n - 1] + a[n - k - 1] + a[0] + a[n - 2]) << '\n';
  }
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
