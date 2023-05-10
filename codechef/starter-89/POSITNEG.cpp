#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  ll n;
  cin >> n;

  vector<ll> v(n);
  
  for (ll &i : v)
    cin >> i;

  ll temp = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == -1) {
      temp += i + 1;
    }
  }

  ll total = (n * (n + 1)) / 2;
  print(abs(total - temp - temp));
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
