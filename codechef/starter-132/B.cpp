#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, M;
  cin >> N >> M;
  vector<int> bat(N), bowl(M);

  for (int i = 0; i < N; i++)
    cin >> bat[i];

  for (int i = 0; i < M; i++)
    cin >> bowl[i];

  if (N < 4 || M < 4 || N + M < 11) {
    cout << -1 << '\n';
    return;
  }

  sort(bat.begin(), bat.end());
  sort(bowl.begin(), bowl.end());

  long long sum = 0;

  for (int i = 0; i < 4; i++) {
    sum += bat.back() + 0LL;
    bat.pop_back();
  }

  for (int i = 0; i < 4; i++) {
    sum += bowl.back() + 0LL;
    bowl.pop_back();
  }

  for (int i = 0; i < 3; i++) {
    if (bowl.empty()) {
      sum += bat.back() + 0LL;
      bat.pop_back();
    } else if (bat.empty()) {
      sum += bowl.back() + 0LL;
      bowl.pop_back();
    } else if (bat.back() > bowl.back()) {
      sum += bat.back() + 0LL;
      bat.pop_back();
    } else {
      sum += bowl.back() + 0LL;
      bowl.pop_back();
    }
  }

  cout << sum << '\n';
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
