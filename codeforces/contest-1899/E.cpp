#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/cp/code-library/debug.cpp"
#else
#define dbg(x...)
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i];

  int min_index = min_element(v.begin(), v.end()) - v.begin();

  for (int i = min_index; i < N - 1; i++) {
    if (v[i] > v[i + 1]) {
      cout << -1 << '\n';
      return;
    }
  }

  cout << min_index << '\n';
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
