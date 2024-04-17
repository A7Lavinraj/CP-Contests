#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
   string s;
   cin >> s;
   if (s.size() == 1) {
     print(s[0]);
     return;
   }

   int n = ((int)s[s.size() - 2] - (int)'0') * 10 + ((int)s[s.size() - 1] - (int)'0');
   print(n % 20);
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
