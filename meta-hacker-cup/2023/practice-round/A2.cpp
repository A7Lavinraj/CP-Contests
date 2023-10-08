#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

template<typename T> T ceil(T n, T k) {
  return n % k == 0 ? n / k : n / k + 1;
}

void solve() {
  int64_t S, D, K;
  cin >> S >> D >> K;

  auto min_cost = [](int64_t buns, int64_t cheesepatties, int64_t singlecost, int64_t doublecost) -> int64_t {
    int64_t answer1 = 0, answer2 = 0, answer3 = 0;

    answer1 = singlecost * cheesepatties;

    return min({answer1, answer2, answer3});
  };

  print(min_cost(4, 3, S, D));
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
