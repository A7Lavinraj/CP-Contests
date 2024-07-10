#include <bits/stdc++.h>
using namespace std;

pair<int, long long> get_sum(int cnt, long long sum) {
  if (sum % 2 != 0)
    return make_pair(cnt, sum);

  return get_sum(cnt + 1, sum / 2);
}

void testcase() {
  int n;
  cin >> n;
  pair<int, long long> segment = get_sum(1, (n * (n + 1LL)) / 2LL);
  vector<bool> seen(n, false);

  while (segment.first--) {
    long long sum = segment.second;

    for (int i = n - 1; i > 0 && sum != 0; i--)
      if (!seen[i] && sum >= i)
        cout << i << ' ', sum -= i, seen[i] = true;
  }

  for (int i = 1; i <= n; i++)
    if (!seen[i])
      cout << i << ' ';

  cout << '\n';
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
