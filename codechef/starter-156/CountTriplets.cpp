#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);
  unordered_map<int, vector<pair<int, int>>> indices;
  unordered_map<int, vector<int>> id;

  for (int i = 0; i < n; i++)
    cin >> a[i], id[a[i]].push_back(i);

  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      for (int x : id[i]) {
        for (int y : id[j]) {
          indices[abs(x - y)].emplace_back(x, y);
        }
      }
    }
  }

  int cnt = 0;

  for (auto s : indices) {
    for (auto [i, k] : s.second) {
      for (int j = max(min(i, k) - 50, 0); j <= min(max(i, k) + 50, n - 1); j++) {
        if (abs(a[i] - a[k]) == abs(i - j) + abs(j - k))
          cnt++;
      }
    }
  }

  cout << cnt << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
