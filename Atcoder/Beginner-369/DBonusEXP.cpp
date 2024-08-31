#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int64_t N;
  cin >> N;
  vector<int64_t> monster(N);

  for (int64_t i = 0; i < N; i++)
    cin >> monster[i];

  vector<vector<pair<int64_t, int64_t>>> dp(N, vector<pair<int64_t, int64_t>>(2));
  dp[0][0] = {0, 0};
  dp[0][1] = {monster[0], 1};

  auto cal = [&](pair<int64_t, int64_t>& p, int64_t idx) -> int64_t {
    return p.first + monster[idx] + monster[idx] * int64_t((p.second + 1) % 2 == 0);
  };

  for (int64_t i = 1; i < N; i++) {
    if (dp[i - 1][0].first < dp[i - 1][1].first) {
      dp[i][0] = dp[i - 1][1];
    } else {
      dp[i][0] = dp[i - 1][0];
    }

    if (cal(dp[i - 1][0], i) < cal(dp[i - 1][1], i)) {
      dp[i][1] = make_pair(cal(dp[i - 1][1], i), dp[i - 1][1].second + 1);
    } else {
      dp[i][1] = make_pair(cal(dp[i - 1][0], i), dp[i - 1][0].second + 1);
    }
  }

  cout << max(dp[N - 1][0].first, dp[N - 1][1].first) << '\n';

  return 0;
}
