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

const int INF32 = int(1e9) + 7;
const long long INF64 = (long long)1e18 + 7;

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n;
  cin >> n;

  if (n & 1) {
    print((n - 3) / 2 + 1, (n - 3) / 2 + 1, 1);
  }
  else {
    print((n - 3) + 1, 1, 1);
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
