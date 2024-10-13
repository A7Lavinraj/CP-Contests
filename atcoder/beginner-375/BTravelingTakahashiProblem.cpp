#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  long double total = 0;
  pair<long double, long double> prev = {0, 0};

  for (int i = 0; i < n; i++) {
    long double a, b;
    cin >> a >> b;
    total += (long double)sqrt((prev.first - a) * (prev.first - a) + (prev.second - b) * (prev.second - b));
    prev = {a, b};
  }

  total += (long double)sqrt((prev.first - 0) * (prev.first - 0) + (prev.second - 0) * (prev.second - 0));

  cout << fixed << setprecision(6) << total << '\n';

  return 0;
}
