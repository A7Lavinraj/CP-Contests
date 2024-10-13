#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...)
#endif
#define len(x) int((x).size())

using namespace std;

const int64_t INF = int64_t(1e18) + 7;

void solve() {
  int64_t N;
  cin >> N;
  vector<int64_t> weights(N);

  for (int64_t i = 0; i < N; i++)
    cin >> weights[i];

  vector<int64_t> pref(N + 1);
  pref[0] = 0;

  for (int i = 1; i <= N; i++)
    pref[i] = weights[i - 1] + pref[i - 1];

  int64_t ans = -INF;

  for (int i = 1; i <= N; i++) {
    int64_t minimum = INF, maximum = -INF;

    if (N % i != 0)
      continue;

    for (int j = i; j <= N; j += i) {
      maximum = max(maximum, pref[j] - pref[j - i]);
      minimum = min(minimum, pref[j] - pref[j - i]);
    }

    ans = max(ans, abs(maximum - minimum));
  }

  cout << ans << '\n';
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
