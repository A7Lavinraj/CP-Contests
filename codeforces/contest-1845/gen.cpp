#include <bits/stdc++.h>
using namespace std;

#define uid(low, high)  uniform_int_distribution<>(low, high)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


int main() {
  int n = uid(1, 10);
  int k = uid(1, 10);
  int x = uid(1, k);

  cout << 1 << '\n';
  cout << n << " " << k << " " << x;
  return 0;
}

