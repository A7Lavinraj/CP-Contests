#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

const int64_t INF = 1e18 + 7;

void solve() {
  int64_t N, K;
  cin >> N >> K;
  vector<int64_t> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i];

  if (K > 2) {
    cout << 0 << '\n';
    return;
  }

  auto calc = [](vector<int64_t> tmp) -> int64_t {
    int64_t ans = INF;

    for (int i = 0; i < len(tmp); i++)
      for (int j = i + 1; j < len(tmp); j++)
        ans = min(ans, abs(tmp[i] - tmp[j]));

    return ans;
  };

  if (K == 1) {
    cout << calc(v) << '\n';
  }
  else {
    int64_t ans = min(calc(v), *min_element(v.begin(), v.end()));

    for (int i = 0; i < N; i++) {
      for (int j = i + 1; j < N; j++) {
        v.push_back(abs(v[i] - v[j]));
        ans = min(ans, calc(v));
        v.pop_back();
      }
    }
    cout << ans << '\n';
  }
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
