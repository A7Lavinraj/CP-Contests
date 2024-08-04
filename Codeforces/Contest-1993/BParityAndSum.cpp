#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  ll n;
  cin >> n;
  vector<ll> a(n), even;
  ll max_odd = -1;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];

    if (a[i] % 2 == 0)
      even.push_back(a[i]);
    else
      max_odd = max(max_odd, a[i]);
  }

  if (max_odd == -1) {
    cout << 0 << "\n";
    return;
  }

  sort(even.begin(), even.end());
  ll ans = 0;

  while (!even.empty()) {
    if (even.front() > max_odd) {
      ans += len(even) + 1;
      break;
    }

    max_odd = max_odd + even.front();
    even.erase(even.begin());
    ans++;
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
