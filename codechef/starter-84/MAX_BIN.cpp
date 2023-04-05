#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n, k;
  cin >> n >> k;

  string bin;
  cin >> bin;

  if (bin[0] == '0') {
    bin[0] = '1';
    k--;
  }

  while(k--) {
    bin.push_back('0');
  }

  print(bin);
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
