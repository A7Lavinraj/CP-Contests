#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  vector<int> a(3);

  for (int i = 0; i < 3; i++)
    cin >> a[i];

  int have = 5;

  while (have) {
    sort(a.begin(), a.end());
    a[0]++;
    have--;
  }

  cout << a[0] * a[1] * a[2] << '\n';
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
