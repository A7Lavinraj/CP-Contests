#include <bits/stdc++.h>
using namespace std;

const int INIT = 2e6;

void testcase() {
  int64_t n;
  cin >> n;
  vector<int64_t> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  int64_t sum = 0;
  cout << INIT << " ";

  for (int i = 0; i < n - 1; i++) {
    cout << a[i + 1] - sum << " ";
    sum += a[i + 1] - sum;
  }

  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
