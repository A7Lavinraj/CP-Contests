#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll delta = 0;

  for (int i = 0; i < n; i++)
    delta += max(0LL, a[i] - x + 0LL);

  vector<ll> less;

  for (int i = 0; i < n; i++)
    if (a[i] < x)
      less.push_back(x - a[i]);

  sort(less.begin(), less.end());
  ll count = 0;

  for (int i = 0; i < len(less) && delta >= less[i]; i++)
    count++, delta -= less[i];

  for (int i = 0; i < n; i++)
    if (a[i] >= x)
      count++;

  cout << count << '\n';
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
