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

  int minimum = *min_element(v.begin(), v.end());


  for (int i = 0; i < N; i++) {
    if (v[i] == minimum) {
      for (int j = i; j < N - 1; j++) {
        if (v[j] > v[j + 1]) {
          cout << -1 << '\n';
          return;
        }
      }

      cout << i << '\n';
      return;
    }
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
