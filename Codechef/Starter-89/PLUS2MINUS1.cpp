#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void generate(int a, int y, unordered_map<int, bool>& mp) {
  if (y ^ 0 && !mp[a + 2]) {
    mp[a + 2] = true;
    generate(a + 2, y - 1, mp);
  }
  if (y ^ 0 && !mp[a - 1]) {
    mp[a - 1] = true;
    generate(a - 1, y - 1,  mp);
  }
}

void solve(){
  int n;
  cin >> n;
  if (n == 0) {
    print(1);
    return;
  }
  else if (n == 1) {
    print(3);
    return;
  }
  else {
    n -= 1;
    print(n * 3 + 3);
  }
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
