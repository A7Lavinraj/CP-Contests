#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  ll a[n][n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      for (int k = 0; k < n; k++)
        cin >> a[i][j][k];

  ll q;
  cin >> q;

  ll pref[n][n + 1][n + 1];

  for (int i = 0; i < n; i++)
    for (int j = 0; j <= n; j++)
      for (int k = 0; k <= n; k++)
        pref[i][j][k] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        pref[i][j][k] = pref[i][j - 1][k] + pref[i][j][k - 1] - pref[i][j - 1][k - 1] + a[i][j - 1][k - 1];
      }
    }
  }

  while (q--) {
    ll lx, rx, ly, ry, lz, rz;
    cin >> lx >> rx >> ly >> ry >> lz >> rz;
    ll sum = 0;

    for (ll i = lx; i <= rx; i++)
      sum += (pref[i - 1][ry][rz] - pref[i - 1][ly - 1][rz] - pref[i - 1][ry][lz - 1] + pref[i - 1][ly - 1][lz - 1]);

    cout << sum << '\n';
  }

  return 0;
}
