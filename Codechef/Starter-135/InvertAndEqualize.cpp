#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  string s;
  cin >> n >> s;
  vector<pair<char, int>> encoding;
  int cnt = 0;
  char ch = s[0];

  for (int i = 0; i < n; i++) {
    if (s[i] == ch) {
      cnt++;
    } else {
      encoding.push_back(make_pair(ch, cnt));
      cnt = 1;
      ch = s[i];
    }
  }

  encoding.push_back(make_pair(ch, cnt));
  int ans = 0;

  for (int i = 0; i < (int)encoding.size(); i++)
    if (encoding[i].first == '0')
      ans++;

  cout << min(ans, (int)encoding.size() - ans) << '\n';
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
