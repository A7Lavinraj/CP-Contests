#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

#define LOOP(i, low, high, shift) for (int i = low; (low < high > 0 ? i < high : i >= high); (low < high ? i += shift : i -= shift))
#define LOOP1(high) LOOP(i, 0, high, 1)
#define LOOP2(i, high) LOOP(i, 0, high, 1)
#define LOOP3(i, low, high) LOOP(i, low, high, 1)
#define LOOP4(i, low, high, shift) LOOP(i, low, high, shift)
#define FIFTH_ARG(a, b, c, d, e, ...) e
#define GET_LOOP(...) FIFTH_ARG(__VA_ARGS__, LOOP4, LOOP3, LOOP2, LOOP1)
#define For(...) GET_LOOP(__VA_ARGS__)(__VA_ARGS__)

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  pair<ll, ll> a, b, c;
  cin >> a.first >> a.second;
  cin >> b.first >> b.second;
  cin >> c.first >> c.second;

  ll bx = a.first - b.first;
  ll by = a.second - b.second;
  ll cx = a.first - c.first;
  ll cy = a.second - c.second;

  ll ans = 0;
  if (bx * cx > 0) {
    ans += min(abs(bx), abs(cx));
  }
  if (by * cy > 0) {
    ans += min(abs(by), abs(cy));
  }

  print(ans + 1);
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    //cout << "Case #" << i << ": ";
        solve();
  }
  return 0;
}
