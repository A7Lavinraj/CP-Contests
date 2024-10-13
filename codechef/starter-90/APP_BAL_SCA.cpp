#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

ll get_base(ll m) {
  if (m & 1) return m;
  else return get_base(m / 2);
}

void solve(){
  ll m, n;
  cin >> m >> n;

  if (m < n) {
    print("NO");
    return;
  }

  if (m == n) {
    print("YES");
    return;
  }

  if (n % get_base(m) == 0 && m ^ get_base(m)) {
    print("YES");
  }
  else print("NO");
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
    for (int i = 1; i <= t; i++) {
    //cout << "Case #" << i << ": ";
        solve();
  }
  return 0;
}
