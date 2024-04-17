#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int N;
  cin >> N;
  vector<int> friends(N);

  for (int i = 0; i < N; i++)
    cin >> friends[i];

  int count_odd = 0, candies = 0;
  for (int i = 0; i < N; i++) {
    if (friends[i] & 1)
      count_odd++;

    candies += friends[i] - friends[i] % 2;
  }

  print((count_odd != N && count_odd != 0) || candies % N != 0 || (candies % N == 0 && (candies / N) & 1) ? "No" : "Yes");
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
