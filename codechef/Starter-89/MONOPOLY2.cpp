#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int sum = a + b + c + d;

  if (sum - a < a) {
    print("YES");
  }
  else if (sum - b < b) {
    print("YES");
  }
  else if (sum - c < c) {
    print("YES");
  }
  else if (sum - d < d) {
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
