#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

template <typename T = int> void vector_out(vector<T> output) {
  for (T iterator : output) {
    cout << iterator << " ";
  }
  cout << "\n";
}

void solve(){
  int n;
  cin >> n;

  vector<int> v(n);

  for (int &i : v)
    cin >> i;

  for (int i = 0; i < n; i++) {
    cout << !v[i] << " ";
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
