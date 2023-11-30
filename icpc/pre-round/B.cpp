#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int64_t N, K;
  cin >> N >> K;
  vector<int64_t> v(N);

  for (int64_t i = 0; i < N; i++)
    cin >> v[i];

  vector<int64_t> tmp = v;
  int64_t minimum = 0, maximum = 0;
  sort(tmp.begin(), tmp.end());

  for (int i = 0; i < K - 1; i++) {
    minimum += tmp[i];
    tmp.pop_back();
  }
  tmp.pop_back();

  minimum += tmp.back();
  sort(v.begin(), v.end(), greater<int64_t>());

  for (int i = 1; i < N && K; i += 2, K--) {
    maximum += v[i];
  }

  cout << minimum << ' ' << maximum << '\n';
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
