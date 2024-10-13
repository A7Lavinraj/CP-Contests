#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, k;
  cin >> n >> k;
  vector<int> a(k);

  for (int i = 0; i < k; i++)
    cin >> a[i];

  ll ans = 0;

  sort(a.begin(), a.end());

  for (int i = 0; i < k - 1; i++) {
    ans += a[i] - 1LL + a[i];
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
