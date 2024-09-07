#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N;
  cin >> N;
  vector<int> A(N);
  unordered_map<int, int> cnt;
  int zeros = 0;

  for (int i = 0; i < N; i++) {
    cin >> A[i];

    if (A[i] == 0)
      zeros++;
    else
      cnt[A[i]]++;
  }

  vector<pair<int, int>> expand;

  for (const auto &i : cnt)
    expand.emplace_back(i.first, i.second);

  sort(expand.begin(), expand.end(), [](const auto &a, const auto &b) -> bool {
    return a.second > b.second;
  });

  if ((int)expand.size() == 0) {
    cout << (zeros * 1LL * (zeros - 1LL)) / 2LL << '\n';
    return;
  }

  expand[0].second += zeros;
  int64_t ans = 0;

  for (int i = 0; i < (int)expand.size(); i++)
    ans += (expand[i].second * 1LL * (expand[i].second - 1LL)) / 2LL;

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
