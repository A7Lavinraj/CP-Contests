#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  string s;
  cin >> s;

  if (stoi(s.substr(0, 2)) <= 12 && stoi(s.substr(3, 2)) <= 12) {
    print("BOTH");
  }
  else if (stoi(s.substr(0, 2)) <= 12) {
    print("MM/DD/YYYY");
  }
  else print("DD/MM/YYYY");
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
