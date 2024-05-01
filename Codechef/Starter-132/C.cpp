#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K;
  cin >> N >> K;
  vector<string> str(N);

  for (int i = 0; i < N; i++)
    cin >> str[i];

  set<string> unique;

  for (int i = 0; i < N; i++)
    if ((int)count(str[i].begin(), str[i].end(), '1') == 1)
      unique.insert(str[i]);

  int index = K - 1;
  bool result = true;

  if ((int)unique.size() < K) {
    cout << "NO" << '\n';
    return;
  }

  for (string s : unique)
    result &= (s[index--] == '1');

  cout << (result ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}
