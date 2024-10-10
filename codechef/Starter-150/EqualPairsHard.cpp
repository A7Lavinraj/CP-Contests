#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int64_t N;
  cin >> N;
  int64_t ans = 0;
  unordered_map<int64_t, int64_t> cnt;
  pair<int64_t, int64_t> maximum = {0, 0};
  cnt[0] = N;

  auto choose = [](int64_t X) -> int64_t {
    return (X * (X - 1)) / 2;
  };

  while (N--) {
    int64_t X, Y;
    cin >> X >> Y;

    if (maximum.first != 0) {
      ans -= choose(maximum.second + cnt[0]);
      ans += choose(maximum.second);
    }

    ans -= choose(cnt[Y]);
    ans += choose(cnt[Y] + 1);
    cnt[Y]++, cnt[0]--;

    if (maximum.first != 0) {
      if (cnt[maximum.first] < cnt[Y]) {
        ans -= choose(cnt[Y]);
        ans += choose(cnt[Y] + cnt[0]);
        maximum = {Y, cnt[Y]};
      } else {
        ans -= choose(cnt[maximum.first]);
        ans += choose(cnt[maximum.first] + cnt[0]);
        maximum = {maximum.first, cnt[maximum.first]};
      }
    } else {
      ans -= choose(cnt[Y]);
      ans += choose(cnt[Y] + cnt[0]);
      maximum = {Y, cnt[Y]};
    }

    cout << ans << " ";
  }

  cout << '\n';
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
