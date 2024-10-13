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
  int N;
  cin >> N;

  if (N <= 6 || N == 9) {
    print("NO");
    return;
  }

  if ((N - 3) % 3 == 0) {
    print("YES");
    print(1, 4, N - 5);
  }
  else {
    print("YES");
    print(1, 2, N - 3);
  }
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
