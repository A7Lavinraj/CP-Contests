#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  string s;
  cin >> n >> s;

  unordered_map<char, int> mp;

  for (int i = 0; i < n; i++) {
    mp[s[i]]++;
  }

  int odd = 0;

  for (auto i : mp) {
    if (i.second & 1) odd++;
  }

  if (sz(mp) == 1) {
    print(n & 1 ? 2 : 1);
    return;
  }

  if (n & 1) {
    print(odd == 1 ? 1 : 0);
    return;
  }
  else {
    print(odd == 0 ? 1 : 0);
    return;
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
