#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, q;
  string a, b;
  cin >> n >> q >> a >> b;
  vector<vector<int>> pref_a(n + 1, vector<int>(26, 0)),
      pref_b(n + 1, vector<int>(26, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 26; j++)
      pref_a[i + 1][j] = pref_a[i][j] + int((a[i] - 'a') == j);

    for (int j = 0; j < 26; j++)
      pref_b[i + 1][j] = pref_b[i][j] + int((b[i] - 'a') == j);
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    int delta = 0;

    for (int i = 0; i < 26; i++)
      delta +=
          min(pref_a[r][i] - pref_a[l - 1][i], pref_b[r][i] - pref_b[l - 1][i]);

    cout << (r - l + 1 - delta) << '\n';
  }
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
