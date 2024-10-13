#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  long long n;
  cin >> n;

  auto sum = [&](long long x) -> long long {
    return (x * (x + 1)) / 2;
  };

  cout << (sum(9) * (n / 9) + sum(n % 9)) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }

  return 0;
}
