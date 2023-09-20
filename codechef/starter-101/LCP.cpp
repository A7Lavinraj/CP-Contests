#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n, m;
  cin >> n >> m;
  string s, k;
  cin >> s >> k;

  auto diff = [](int a, int b) -> int {
    a -= '0';
    b -= '0';
    return min(abs(min(a, b) - max(a, b)), abs(9 - max(a, b)) + min(a, b) + 1);
  };

  int64_t answer = INT_MAX;

  for (int i = 0; i < n - m + 1; i++) {
    int64_t cnt = 0;

    for (int j = 0; j < m; j++) {
      cnt += diff(s[i + j], k[j]) + 0LL;
    }

    answer = min(answer, cnt);
  }

  print(answer);
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
