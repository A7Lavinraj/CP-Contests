#include <bits/stdc++.h>
using namespace std;

#define uid(low, high)  uniform_int_distribution<>(low, high)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

int main() {
  int t = 1;
  cout << t << '\n';
  for (int i = 0; i < t; i++) {
    int n = uid(1, 10);
    int k = uid(1, 10);
    cout << n << " " << k << '\n';
    for (int j = 0; j < n; j++)
      cout << uid(1, 10) << ' ';
    cout << '\n';
  }
  return 0;
}
