#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  unordered_map<int, int> freq;

  for (int i = 0; i < n; i++)
    freq[a[i]]++;

  vector<pair<int, int>> tmp;

  for (auto &it : freq)
    tmp.emplace_back(it.second, it.first);

  sort(tmp.rbegin(), tmp.rend());

  ll combined = 0, ans = 0;

  for (int i = 0; i < len(tmp); i++) {
    combined += tmp[i].first + 0LL;
    ans = max(ans, combined - combined % (i + 1));
  }

  cout << ans << '\n';
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
