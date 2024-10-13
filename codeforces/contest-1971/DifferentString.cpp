#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  string S;
  cin >> S;

  if (count(S.begin(), S.end(), S[0]) == (int) S.size()) {
    cout << "NO" << '\n';
    return;
  }

  for (int i = 1; i < (int) S.size(); i++) {
    if (S[i] != S[0]) {
      swap(S[0], S[i]);
      break;
    }
  }

  cout << "YES" << '\n' << S << '\n';
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
