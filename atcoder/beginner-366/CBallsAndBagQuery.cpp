#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll q;
  cin >> q;
  map<ll, ll> bag;
  int cnt = 0;

  while (q--) {
    ll type;
    cin >> type;

    if (type == 1) {
      ll x;
      cin >> x;

      if (bag[x] == -1)
        cnt--, bag[x] = 0;

      bag[x]++;
    } else if (type == 2) {
      ll x;
      cin >> x;

      bag[x]--;

      if (bag[x] == 0)
        cnt++, bag[x] = -1;
    } else {
      cout << bag.size() - cnt << "\n";
    }
  }

  return 0;
}
