#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> arr(n + 1, 1);

  if (n == 1) {
    cout << 1 << '\n' << 1 << '\n';
    return;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 2; i * j <= n; j++) {
      if (arr[i] == arr[i * j])
        arr[i * j]++;
    }
  }

  cout << *max_element(arr.begin(), arr.end()) << '\n';

  for (int i = 1; i <= n; i++)
    cout << arr[i] << ' ';

  cout << '\n';
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
