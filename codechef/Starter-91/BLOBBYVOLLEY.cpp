#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  char server = 'A';
  int alice = 0, bob = 0;
  for (char i : s) {
    if (server == i && i == 'A') alice++;
    if (server == i && i == 'B') bob++;
    server = i;
  }

  print(alice, bob);
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
