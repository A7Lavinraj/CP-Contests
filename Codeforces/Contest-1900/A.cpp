#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int N;
  string S;
  cin >> N >> S;

  int cnt = 0, ans = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == '#') {
      ans = max(ans, cnt);
      cnt = 0;
    }
    cnt += S[i] == '.';
  }

  ans = max(ans, cnt);

  cout << (ans > 2 ? 2 : count(S.begin(), S.end(), '.')) << '\n';
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
