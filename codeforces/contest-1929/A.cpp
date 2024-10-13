#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  int ans = 0;

  for (int i = 1; i < n; i++)
    ans += arr[i] - arr[i - 1];

  cout << ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase(); cout << '\n';
  }

  return 0;
}
