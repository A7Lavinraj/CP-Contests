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
  int64_t N, K;
  cin >> N >> K;
  vector<int64_t> chocolates(N);

  for (int64_t &c : chocolates)
    cin >> c;

  if (K == 0) {
    print(accumulate(chocolates.begin(), chocolates.end(), int64_t(0)) % N == 0 &&  accumulate(chocolates.begin(), chocolates.end(), int64_t(0)) >= N ? "YES" : "NO");
    return;
  }

  print(accumulate(chocolates.begin(), chocolates.end(), int64_t(0)) >= N ? "YES" : "NO");
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
