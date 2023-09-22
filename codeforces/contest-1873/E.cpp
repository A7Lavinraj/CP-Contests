#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int64_t n, k;
  cin >> n >> k;
  vector<int64_t> v(n);

  for (int64_t &i : v)
    cin >> i;

  auto predicate = [&](int64_t height) -> int64_t {
    int64_t water = 0;

    for (int i = 0; i < n; i++) {
      water += max(int64_t(0), (height - v[i]));
    }

    return water;
  };

  int64_t low = 1, high = int64_t(1e10);

  while(high - low > int64_t(1)) {
    int64_t mid = low + (high - low) / int64_t(2);

    if (predicate(mid) <= k) {
      low = mid;
    }
    else high = mid;
  }

  print(low);
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
