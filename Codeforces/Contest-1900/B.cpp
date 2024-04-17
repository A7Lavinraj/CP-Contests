#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int A, B, C;
  cin >> A >> B >> C;

  cout << (abs(B - C) % 2 == 0) << ' ' << (abs(A - C) % 2 == 0) << ' ' << (abs(A - B) % 2 == 0) << '\n';
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
