#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int N, K;
  string s;
  cin >> N >> K >> s;

  int dir = 1, curr = 0;

  for (int i = 0; i < K; i++) {
    if (s[i] == 'U') {
      curr = (curr + (1 * dir)) % N;
    }
    else if (s[i] == 'S') {
      curr = (curr + (2 * dir)) % N;
    }
    else {
      dir *= -1;
      curr = (curr + (1 * dir)) % N;
    }

    if (curr < 0) {
      curr += N;
    }
  }

  cout << curr + 1 << '\n';
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
