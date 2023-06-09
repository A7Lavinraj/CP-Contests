#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
   int n;
   cin >> n;
   vector<int> v(n);
   for (int &i : v)
     cin >> i;

   int run = 0;
   int cnt = 0;
   for (int i = 0; i < n; i++) {
     run += v[i];
     if (run == i + 1) {
       cnt++;
     }
   }
   print(cnt);
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
