#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  string s;
  cin >> s;

  int low = 0, high = sz(s) - 1;
  unordered_map<char, bool> mp;

  while(low < high) {
    if (!mp[s[low]]) mp[s[low]] = true;
    low++, high--;
  }

  if (sz(mp) > 1) {
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
