#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define len(x) int((x).size())
#define endl '\n'

void solve() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i];

  int happiness = 0;
  int maximum = 0, minimum = 0;

  for (int i = 0; i < N; i++) {
    if (L <= a[i] && a[i] <= R)
      happiness++;
    else
      happiness--;

    maximum = max(maximum, happiness);
    minimum = min(minimum, happiness);
  }

  cout << maximum << ' ' << minimum << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}
