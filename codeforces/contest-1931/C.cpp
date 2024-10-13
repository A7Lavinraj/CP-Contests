#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  if (arr[0] != arr[n - 1]) {
    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      if (arr[0] == arr[i]) {
        cnt++;
        ans = max(ans, cnt);
      } else {
        break;
      }
    }

    cnt = 0;

    for (int i = n - 1; i >= 0; i--) {
      if (arr[n - 1] == arr[i]) {
        cnt++;
        ans = max(ans, cnt);
      } else {
        break;
      }
    }

    cout << (n - ans);
  } else {
    int low = 0, high = n - 1;

    while(arr[low] == arr[0]) {
      low++;
    }

    while(arr[high] == arr[n - 1]) {
      high--;
    }

    cout << (low > high ? 0 : high - low + 1);
  }
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
