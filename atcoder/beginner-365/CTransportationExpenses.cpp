#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N, M;
  cin >> N >> M;
  vector<ll> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  auto eval = [&](ll x) -> ll {
    ll subsidy = 0;

    for (int i = 0; i < N; i++)
      subsidy += min(a[i], x);

    return subsidy;
  };

  if (accumulate(a.begin(), a.end(), 0LL) <= M) {
    cout << "infinite" << '\n';
  } else {
    ll low = 0, high = M;

    while (high - low > 1) {
      ll mid = low + (high - low) / 2;

      if (eval(mid) <= M)
        low = mid;
      else
        high = mid;
    }

    cout << low << '\n';
  }

  return 0;
}
