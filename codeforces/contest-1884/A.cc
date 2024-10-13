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
  int N, K;
  cin >> N >> K;

  auto bitsum = [](int N) -> int {
    int sum = 0;
    while(N) {
      sum += N % 10;
      N /= 10;
    }

    return sum;
  };

  for (int i = N; true; i++) {
    dbg(bitsum(i));
    if (bitsum(i) % K == 0) {
      print(i);
      return;
    }
  }
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
