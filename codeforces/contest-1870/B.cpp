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
  vector<int> a(n), b(m);

  for (int i = 0; i < n; i++) 
    cin >> a[i];

  for (int i = 0; i < m; i++) 
    cin >> b[i];

  int OR = 0;

  for (int i = 0; i < m; i++) {
    OR |= b[i];
  }

  dbg(OR);

  if (n & 1) {
    int mn = a[0], mx = a[0] | OR;
    
    for (int i = 1; i < n; i++) {
      mn ^= a[i];
      mx ^= (a[i] | OR);
    }

    print(mn, mx);
  }
  else {
    int mn = a[0] | OR, mx = a[0];

    for (int i = 1; i < n; i++) {
      mn ^= (a[i] | OR);
      mx ^= a[i];
    }

    print(mn, mx);
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
