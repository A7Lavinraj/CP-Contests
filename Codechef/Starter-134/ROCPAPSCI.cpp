#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  string s;
  cin >> n >> s;
  char previous = s[0];
  int ans = 0;

  for (int i = 1; i < (int) s.size(); i++)
    if (previous == s[i]) {
      previous = '$';
    } else {
      previous = s[i];
      ans++;
    }

  cout << ans + 1 << "\n";
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
