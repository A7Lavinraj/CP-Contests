#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() { 
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 1; i < n; i++)
    cout << a[i] << " ";

  cout << a[0] << '\n';
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
