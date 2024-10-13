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
  cin >> N >> K;
  vector<int> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i];

  bool sorted = true;

  for (int i = 1; i < N; i++) {
    if (v[i] < v[i - 1]) {
      sorted = false;
    }
  }

  if (sorted) {
    cout << "YES" << '\n';
    return;
  }

  cout << (K == 1 ? "NO" : "YES") << '\n';
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
