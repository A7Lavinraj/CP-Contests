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
  int64_t N;
  cin >> N;
  vector<int64_t> elves(N);

  for (int i = 0; i < N; i++)
    cin >> elves[i];

  sort(elves.begin(), elves.end());

  cout << fixed;

  if (N == 4) {
    print(abs((float(elves[0] + elves[1]) / 2 - float(elves[2] + elves[3]) / 2)));
  }
  else if (N == 5) {
    print(max(abs(float(elves[0] + elves[1]) / 2 - float(elves[2] + elves[4]) / 2), abs(float(elves[0] + elves[2]) / 2 - float(elves[3] + elves[4]) / 2)));
  }
  else {
    print(abs(float(elves[0] + elves[1]) / 2 - float(elves[N - 1] + elves[N - 2]) / 2));
  }
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
