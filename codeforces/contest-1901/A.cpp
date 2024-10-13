#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void solve(){
  int N, X;
  cin >> N >> X;
  vector<int> v(N);

  for (int i = 0; i < N; i++)
    cin >> v[i];

  int gap = v[0];

  for (int i = 0; i < N - 1; i++) {
    gap = max(v[i + 1] - v[i], gap);
  }

  cout << max(gap, 2 * (X - v.back())) << '\n';
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
