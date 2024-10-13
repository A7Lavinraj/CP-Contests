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
  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> v(n);
  vector<int> b(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i].first;
    v[i].second = i;
  }

  for (int &i : b)
    cin >> i;

  sort(v.begin(), v.end());
  sort(b.begin(), b.end());

  vector<int> ans(n);

  for (int i = 0; i < n; i++) {
    ans[v[i].second] = b[i];
  }

  vector_out(ans);
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
