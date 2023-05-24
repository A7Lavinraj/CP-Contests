#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  ll n, k;
  cin >> n >> k;

  ll odd = (n & 1 ? n / 2 + 1 : n / 2);

  if (n < 2 * k) {
    print("NO");
    return;
  }

  if (odd < k) {
    print("NO");
    return;
  }

  odd -= k;
  if (odd & 1) {
    print("NO");
  }
  else print("YES");
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
