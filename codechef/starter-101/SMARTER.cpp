#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  int tort = n % a == 0 ? n / a : n / a + 1;
  int hare = n % b == 0 ? n / b : n / b + 1;

  print(tort == hare ? -1 : abs(tort - hare) - 1);
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
