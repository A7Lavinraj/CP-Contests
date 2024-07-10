#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) {
    if (a[i] > i + 1) {
      cout << "NO" << '\n';
      return;
    }
  }

  cout << "YES" << '\n';
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
