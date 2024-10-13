#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n, k, x;
  cin >> n >> k >> x;

  if ((x + 1) < k || (n < k)) {
    print(-1);
    return;
  }

  int target = k - 1;
  int64_t sum = (target * (target + 1)) / 2;
  dbg(sum);

  if (x == k) {
    sum += (n - k) * (x - 1);
  }
  else sum += (n - k) * x;

  print(sum);
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
