#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int64_t n, m;
  string a, b;
  cin >> n >> m >> a >> b;
  int64_t index = 0;

  if (a == b) {
    cout << 0 << '\n';
    return;
  }

  if (a[0] != b[0]) {
    cout << -1 << '\n';
    return;
  }

  for (int64_t i = 0; i < min(n, m); i++) {
    if (a[i] != b[i])
      break;

    index++;
  }

  if ((n - index) < (m - index)) {
    if (a.substr(index, n - index) == b.substr(m - n + index, n - index)) {
      cout << 1 << '\n';
      return;
    }
  } else {
    if (a.substr(n - m + index, m - index) == b.substr(index, m - index)) {
      cout << 1 << '\n';
      return;
    }
  }

  cout << 2 << '\n';
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
