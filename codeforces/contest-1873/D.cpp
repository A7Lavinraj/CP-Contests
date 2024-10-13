#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int answer = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'B') {
      i += k - 1;
      answer++;
    }
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
