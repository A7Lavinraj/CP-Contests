#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, m, k;
  cin >> n >> m >> k;

  for (int i = n; i >= k; i--)
    cout << i << " ";

  for (int i = m + 1; i < k; i++)
    cout << i << " ";

  for (int i = 1; i <= m; i++)
    cout << i << " ";

  cout << "\n";
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
