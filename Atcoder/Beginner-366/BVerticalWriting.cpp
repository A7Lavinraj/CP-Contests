#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> a(n);
  int m = 0;

  for (int i = 0; i < n; i++)
    cin >> a[i], m = max(m, len(a[i]));

  vector<vector<char>> ans(m, vector<char>(n, '$'));

  for (int i = n - 1; ~i; i--) {
    for (int j = 0; j < len(a[i]); j++) {
      ans[j][n - i - 1] = a[i][j];
    }
  }

  for (auto &i : ans) {
    bool status = false;

    for (int j = len(i) - 1; ~j; j--) {
      if (status && i[j] == '$')
        i[j] = '*';

      if (i[j] != '$')
        status = true;

    }
  }

  for (auto i : ans) {
    for (int j = 0; j < len(i); j++)
      if (i[j] != '$')
      cout << i[j];

    cout << '\n';
  }

  return 0;
}
