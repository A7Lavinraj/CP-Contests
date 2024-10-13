#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t, p;
  cin >> n >> t >> p;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.rbegin(), a.rend());

  cout << max(t - a[p - 1], 0) << '\n';

  return 0;
}
