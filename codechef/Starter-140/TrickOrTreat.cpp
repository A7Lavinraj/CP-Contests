#include <bits/stdc++.h>
using namespace std;

void testcase() {
  long long n, m;
  cin >> n >> m;
  vector<long long> a(n), b(n);

  for (long long i = 0; i < n; i++)
    cin >> a[i];

  for (long long i = 0; i < n; i++)
    cin >> b[i];

  map<long long, long long> freq;

  for (long long i = 0; i < n; i++)
    freq[b[i] % m]++;

  long long ans = 0;

  for (long long i = 0; i < n; i++)
    ans += freq[a[i] % m == 0 ? 0 : m - a[i] % m];

  cout << ans << '\n';
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
