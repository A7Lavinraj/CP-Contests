#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;

  for (int i = 0; i < n - 2; i++) {
    if (s[i] == '#' && s[i + 2] == '#' && s[i + 1] == '.')
      cnt++;
  }

  cout << cnt << '\n';

  return 0;
}
