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
  int n;
  cin >> n;

  string a, b;
  cin >> a >> b;

  int chef = 0, chefina = 0;

  auto validate = [](char a, char b) -> int {
    if (a == 'R' && b == 'P')
      return 0;
    if (a == 'P' && b == 'S')
      return 0;
    if (a == 'S' && b == 'R')
      return 0;
    if (a == b)
      return 0;

    return 1;
  };

  for (int i = 0; i < n; i++) {
    chef += validate(a[i], b[i]);
    chefina += validate(b[i], a[i]);

  }

  int round = 0;

  if (chef > chefina) {
    print(0);
    return;
  }

  while(chef <= chefina) {
    round++;
    chef++, chefina--;
  }

  print(round);
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
