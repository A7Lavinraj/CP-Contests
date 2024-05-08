#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  sort(a.begin(), a.end());
  long long sum = 0;

  for (int i = 0; i < N / 2; i++)
    sum -= a[i] + 0LL;

  for (int i = N / 2; i < N; i++)
    sum += a[i] + 0LL;

  cout << sum << '\n';
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
