#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) {
        cout << s[i];
        i = j;
        break;
      }
    }
  }

  print();
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
