#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long N;
  cin >> N;
  vector<long long> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  vector<long long> len;
  long long cnt = 0;

  for (int i = 0; i < N; i++)
    if (A[i] & 1LL)
      cnt++;
    else {
      len.push_back(cnt);
      cnt = 0LL;
    }

  if (cnt != 0LL)
    len.push_back(cnt);

  sort(len.begin(), len.end(), greater<long long>());
  len.push_back((len[0] - 1LL) / 2LL);
  len.push_back((len[0] - 1LL) - (len[0] - 1LL) / 2LL);
  len.erase(len.begin());
  long long ans = (N * (N + 1LL)) / 2LL;

  for (int i = 0; i < (int)len.size(); i++)
    ans = ans - (len[i] * (len[i] + 1LL)) / 2LL;

  cout << ans << '\n';
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
