#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int64_t n, k;
  cin >> n >> k;
  vector<int64_t> enemy(n);

  for (int64_t &i : enemy)
    cin >> i;

  sort(enemy.begin(), enemy.end(), greater<int64_t>());

  for (int i = 0; i < n; i++) {
    if ((k - enemy[i]) <= 0) {
      print(enemy[i]);
      return;
    }

    k -= enemy[i];
  }

  print(0);
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
