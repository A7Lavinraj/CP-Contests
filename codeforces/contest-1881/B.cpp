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
  array<int, 3> params;
  cin >> params[0] >> params[1] >> params[2];

  sort(params.begin(), params.end());

  if (params[1] % params[0] == 0 && params[2] % params[0] == 0) {
    int ops = params[1] / params[0] + params[2] / params[0] - 2;

    print(ops > 3 ? "NO" : "YES");
  }
  else print("NO");
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
