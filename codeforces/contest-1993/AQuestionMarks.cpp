#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> hash(4, 0);

  for (int i = 0; i < 4 * n; i++)
    if (s[i] != '?')
      hash[s[i] - 'A']++;

  int ans = 0;

  for (int i = 0; i < 4; i++)
    ans += min(n, hash[i]);

  cout << ans << '\n';
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
