#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int S, D, K;
  cin >> S >> D >> K;

  int buns = 2 * (S + D);
  int patties = S + D * 2;

  print((K + 1) <= buns && K <= patties? "YES" : "NO");
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
