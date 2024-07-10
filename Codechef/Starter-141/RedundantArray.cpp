#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<int, int> freq;

  for (int i = 0; i < n; i++)
    freq[a[i]]++;

  long long ans = LONG_LONG_MAX;

  for (auto it : freq)
    ans = min(ans, (n - it.second) * 1LL * it.first);

  cout << min(n * 1LL, ans) << '\n';
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
