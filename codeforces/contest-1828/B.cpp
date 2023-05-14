#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int).size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  cin >> n;

  vector<int> v(n);

  for (int &i : v) 
    cin >> i;

  vector<int> temp;
  int ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (abs(v[i] - 1 - i) == 0) continue;
    else {
      ans = min(ans, abs(v[i] - 1 - i));
      temp.push_back(abs(v[i] - 1 - i));
    }
  }

  for (int i = ans; i >= 0; i--) {
    bool ok = true;
    for (int j : temp) {
      if (j % i ^ 0) {
        ok = false;
        break;
      }
    }

    if (ok) {
      print(i);
      return;
    }
  }

  print(ans);
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
