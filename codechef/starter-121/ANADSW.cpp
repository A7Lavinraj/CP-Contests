#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  if (is_sorted(arr.begin(), arr.end()) || n == 1) {
    cout << "YES";
    return;
  }

  if (n == 2) {
    cout << "NO";
    return;
  }

  if (n == 3) {
    swap(arr[0], arr[2]);

    if (is_sorted(arr.begin(), arr.end())) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  } else cout << "YES";
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
