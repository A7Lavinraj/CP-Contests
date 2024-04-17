#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  cin >> n;

  vector<int> v(n);

  for (int &i : v)
    cin >> i;

  sort(v.begin(), v.end());

  if (v[0] & 1) {
    print("YES");
  }
  else {
    for (int i : v) {
      if (i & 1) {
        print("NO");
        return;
      }
    }

    print("YES");
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
