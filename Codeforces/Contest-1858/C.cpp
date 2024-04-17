#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  cin >> n;

  vector<bool> v(n, false);

  int ptr = 0;
  auto next = [&]() -> int {
    for (int i = ptr; i < n; i++) {
      if (!v[i]) {
        ptr = i;
        return i + 1;
      }
    }
    return -1;
  };

  int temp = next();

again:
  while(temp <= n) {
    if (!v[temp - 1]) {
      v[temp - 1] = true;
      cout << temp << ' ';
    }
    temp *= 2;
  }

  temp = next();
  if (temp != -1) goto again;

  print();
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
