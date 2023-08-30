#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int N, A, Q;
  cin >> N >> A >> Q;

  string s;
  cin >> s;

  int cnt = A, pos = 0, mx = A;
  for (int i = 0; i < Q; i++) {
    if (s[i] == '+') {
      cnt++;
      pos++;
    }
    else cnt--;
    mx = max(cnt, mx);
  }

  if (mx >= N) {
    print("YES");
  }
  else if (A + pos >= N) {
    print("MAYBE");
  }
  else print("NO");
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
