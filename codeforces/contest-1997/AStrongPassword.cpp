#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  string s, strong;
  cin >> s;
  bool status = true;

  for (int i = 0; i < (int)s.size(); i++) {
    if (strong.empty()) {
      strong.push_back(s[i]);
    } else {
      if (strong.back() == s[i] && status) {
        for (int j = 0; j < 26; j++) {
          if (char('a' + j) != strong.back() && char('a' + j) != s[i]) {
            strong.push_back(char('a' + j));
            break;
          }
        }

        status = false;
      }

      strong.push_back(s[i]);
    }
  }

  if (status) {
    strong.push_back(char((s.back() - 'a' + 1) % 26 + 'a'));
  }

  cout << strong << '\n';
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
