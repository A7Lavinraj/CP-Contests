#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...)
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int N, K;
  cin >> N >> K;
  string s;
  cin >> s;

  int cnt = count(s.begin(), s.end(), 'B');

  if (cnt == K) {
    cout << 0 << '\n';
    return;
  }
  else if (cnt < K) {
    for (int i = 0; i < N; i++) {
      if (cnt == K) {
        cout << 1 << '\n';
        cout << i << " B" << '\n'; 
        return;
      }
      cnt += s[i] == 'A';
    }

    cout << 1 << '\n';
    cout << N << " B" << '\n';
  }
  else {
    for (int i = 0; i < N; i++) {
      if (cnt == K) {
        cout << 1 << '\n';
        cout << i << " A" << '\n';
        return;
      }
      cnt -= s[i] == 'B';
    }

    cout << 1 << '\n';
    cout << N << " A" << '\n';
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
