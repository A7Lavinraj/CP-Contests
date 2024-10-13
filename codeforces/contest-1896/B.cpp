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
  cin >> N;
  string s;
  cin >> s;

  int index = 0;

  for (int i = 0; i < N; i++) {
    if (s[i] == 'B')
      index = i;
  }

  int seen = -1;

  for (int i = 0; i < index; i++) {
    if (s[i] == 'A') {
      seen = i;
      break;
    }
  }

  cout << (seen != -1 ? index - seen : 0) << '\n';
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
