#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int x, y, z;
  cin >> x >> y >> z;

  int total = x * y;
  int time = z * 24 * 60;

  print(total <= time ? "YES" : "NO");
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
