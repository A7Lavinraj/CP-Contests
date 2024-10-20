#include <bits/stdc++.h>
using namespace std;

void testcase() {
  string a, b;
  cin >> a >> b;
  int index = 0;

  for (int i = 0; i < min(a.size(), b.size()); i++) {
    if (a[i] != b[i])
      break;

    index = i;
  }

  cout << (index + 1 + (a.size() - index) + (b.size() - index) - 1) << '\n';
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
