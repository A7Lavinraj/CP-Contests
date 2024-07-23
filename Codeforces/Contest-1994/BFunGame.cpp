#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  int first_index = 0;

  for (int i = 0; i < n; i++, first_index++)
    if (s[i] == '1')
      break;

  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      if (first_index > i) {
        cout << "NO" << '\n';
        return;
      }
    }
  }

  cout << "YES" << '\n';
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
