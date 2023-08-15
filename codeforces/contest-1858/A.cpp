#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int a, b, c;
  cin >> a >> b >> c;

  int anna = a + (c & 1 ? c / 2 + 1 : c / 2);
  int katie = b + c / 2;

  if (anna == katie) {
    print("Second");
  }
  else if (anna > katie) {
    print("First");
  }
  else print("Second");
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
