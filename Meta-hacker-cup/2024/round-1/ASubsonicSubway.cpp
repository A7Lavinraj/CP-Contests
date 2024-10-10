#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  long double ans = 0;
  vector<pair<int, int>> interval(n);

  for (int i = 0; i < n; i++) {
    cin >> interval[i].first >> interval[i].second;
  }

  for (int i = 0; i < n; i++) {
    ans = max(ans, (long double)(i + 1) / (interval[i].second));
  }

  for (int i = 0; i < n; i++) {
    long double time = (long double)(i + 1) / ans;

    if (!(interval[i].first <= time && time <= interval[i].second)) {
      cout << -1 << '\n';
      return;
    }
  }

  cout << fixed << setprecision(6) << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
