#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);
  unordered_map<int, int> cnt;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }

  for (const auto &[x, y] : cnt) {
    if (y > 1) {
      cout << 1 << '\n' << x << '\n';
      return;
    }
  }

  cout << -1 << '\n';
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

