#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

 void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int N, K;
  cin >> N >> K;
  vector<int> v(N);

  for (int &a : v)
    cin >> a;

  map<int, bool>  occurance;

  for (int i = 0; i < N; i++) {
    occurance[v[i]] = true;
  }

  print(occurance[K] ? "YES" : "NO");
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
