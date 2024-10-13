#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  string s, result;
  cin >> n >> s;
  stack<char> st;

  for (int i = 0; i < len(s); i++) {
    if (st.empty()) {
      st.push(s[i] == '_' ? '(' : s[i]);
      result.push_back(s[i] == '_' ? '(' : s[i]);
    } else {
      if (s[i] == ')' || s[i] == '_') {
        st.pop();
        result.push_back(s[i] == '_' ? ')' : s[i]);
      } else {
        st.push(s[i]);
        result.push_back(s[i]);
      }
    }
  }

  ll cost = 0;
  stack<pair<char, int>> indexed;

  for (int i = 0; i < len(result); i++) {
    if (indexed.empty() || s[i] == '(') {
      indexed.push(make_pair(result[i], i));
    } else {
      cost += ll(i - indexed.top().second);
      indexed.pop();
    }
  }

  cout << cost << '\n';
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
