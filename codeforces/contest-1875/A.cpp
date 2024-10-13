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
  int64_t A, B, N;
  cin >> A >> B >> N;
  vector<int64_t> tools(N);

  for (int64_t &t : tools)
    cin >> t;

  int64_t answer = B;

  for (int64_t i = 0; i < N; i++) {
    answer += tools[i] < A ? tools[i] : min(tools[i], A) - 1;
  }

  print(answer);
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
