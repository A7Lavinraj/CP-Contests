#include <bits/stdc++.h>
using namespace std;

#define ll int64_t

void testcase() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);

  for (ll i = 0; i < n; i++)
    cin >> a[i];

  auto delta = [&]() -> ll {
    vector<vector<ll>> tmp(31, vector<ll>(n, 0));

    for (ll bit = 0; bit <= 30; bit++) {
      for (ll i = 0; i < n; i++) {
        if ((a[i] >> bit & 1) != (k >> bit & 1)) {
          tmp[bit][i] = 1;
        }
      }
    }

    ll ops = 0;

    for (ll i = 1; i < n; i++) {
      bool ok = true;

      for (ll bit = 0; bit <= 30; bit++) {
        if (tmp[bit][i - 1] != tmp[bit][i]) {
          ok = false;
          break;
        }
      }

      if (!ok || i == n - 1)
        ops++;
    }

    return ops;
  };

  ll ans = delta();

  for (ll i = 0; i < n; i++)
    a[i] = __gcd(a[i], k);

  ans = min(ans, delta() + 1);
  cout << ans << '\n';
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
