#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  string s;
  cin >> n >> s;
  vector<pair<char, int>> encoding;
  char c = s[0];
  int cnt = 0;

  for (int i = 0; i < (int)s.size(); i++) {
    if (c == s[i])
      cnt++;
    else {
      encoding.push_back(make_pair(c, cnt));
      c = s[i];
      cnt = 1;
    }
  }

  encoding.push_back(make_pair(c, cnt));
  int cnt_zero = 0, cnt_one = 0;

  for (auto it : encoding)
    cnt_zero += it.first == '0';

  for (auto it : encoding)
    cnt_one += int(it.first == '1') * it.second;

  cout << (cnt_one > cnt_zero ? "Yes" : "No") << '\n';
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
