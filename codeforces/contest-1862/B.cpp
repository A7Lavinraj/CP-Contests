#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

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

  vector<int> ans;
  ans.push_back(v[0]);
  for (int i = 1; i < n; i++) {
    if (v[i] < v[i - 1]) {
      ans.push_back(v[i]);
      ans.push_back(v[i]);
    }
    else ans.push_back(v[i]);
  }

  print(sz(ans));
  vector_out(ans);
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
