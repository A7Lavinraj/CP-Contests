#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int L, R, M;
  cin >> L >> R >> M;

  print((int)ceil((float)M / L) + M / R);
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
