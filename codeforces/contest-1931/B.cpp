#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int64_t n;
  cin >> n;
  vector<int64_t> arr(n);

  for (int64_t i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int64_t sum = accumulate(arr.begin(), arr.end(), int64_t(0));
  int64_t temp = 0;

  for (int64_t i = n - 1; i > 0; i--) {
    temp += arr[i] - sum / n;

    if (temp > 0) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
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
