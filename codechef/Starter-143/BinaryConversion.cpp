#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, k;
  string s, t;
  cin >> n >> k >> s >> t;

  if (count(s.begin(), s.end(), '0') != count(t.begin(), t.end(), '0')) {
    cout << "NO" << '\n';
  } else {
    int want = 0;

    for (int i = 0; i < n; i++)
      want += s[i] != t[i];

    want = want / 2;

    if (want > k)
      cout << "NO" << '\n';
    else if (want == k)
      cout << "YES" << '\n';
    else
      cout << (count(s.begin(), s.end(), '0') > 1 ||
                       count(s.begin(), s.end(), '1') > 1 || (k - want) % 2 == 0
                   ? "YES"
                   : "NO")
           << "\n";
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
