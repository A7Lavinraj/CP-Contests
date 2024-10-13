#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

#define LOOP(i, low, high, shift) for (ll i = low; (low == high ? false : (low < high ? i < high : i >= high)); (low < high ? i += shift : i -= shift))
#define LOOP1(high) LOOP(i, 0, high, 1)
#define LOOP2(i, high) LOOP(i, 0, high, 1)
#define LOOP3(i, low, high) LOOP(i, low, high, 1)
#define LOOP4(i, low, high, shift) LOOP(i, low, high, shift)
#define FIFTH_ARG(a, b, c, d, e, ...) e
#define GET_LOOP(...) FIFTH_ARG(__VA_ARGS__, LOOP4, LOOP3, LOOP2, LOOP1)
#define For(...) GET_LOOP(__VA_ARGS__)(__VA_ARGS__)

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

const long long INF64 = (long long)1e18 + 7;

void solve() {
  ll n, k, a, b;
  cin >> n >> k >> a >> b;
  vector<pair<ll, ll>> cities(n);

  For (n)
    cin >> cities[i].first >> cities[i].second;

  auto cost = [](pair<ll, ll>& X, pair<ll, ll>& Y) -> ll {
    return abs(X.first - Y.first) + abs(X.second - Y.second);
  };

  if (k == 0) {
    print(cost(cities[a - 1], cities[b - 1]));
    return;
  }

  ll direct_cost = cost(cities[a - 1], cities[b - 1]);
  ll start_min_cost = INF64, end_min_cost = INF64;

  For (k) {
    if (a - 1 != i)
      start_min_cost = min(start_min_cost, cost(cities[a - 1], cities[i]));

    if (b - 1 != i)
      end_min_cost = min(end_min_cost, cost(cities[b - 1], cities[i]));
  }

  if (a <= k && b <= k) {
    print(0);
    return;
  }
  else if (a <= k) {
    print(end_min_cost);
    return;
  }
  else if (b <= k) {
    print(start_min_cost);
    return;
  }
  else {
    print(min({direct_cost, start_min_cost + end_min_cost}));
  }
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
