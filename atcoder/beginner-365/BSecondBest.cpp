#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<pair<int, int>> a(N);

  for (int i = 0; i < N; i++)
    cin >> a[i].first, a[i].second = i + 1;

  sort(a.begin(), a.end());

  cout << a[N - 2].second << '\n';

  return 0;
}
