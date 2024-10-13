#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll N, X, Y;
  cin >> N >> X >> Y;
  vector<pair<ll, ll>> dish(N);

  for (int i = 0; i < N; i++)
    cin >> dish[i].first;

  for (int i = 0; i < N; i++)
    cin >> dish[i].second;

  sort(dish.begin(), dish.end(),
       [](auto a, auto b) -> bool { return a.first > b.first; });
  ll cnt_sweet = 0;

  for (int i = 0; i < N && X >= 0; i++) {
    cnt_sweet++;
    X -= dish[i].first;
  }

  sort(dish.begin(), dish.end(),
       [](auto a, auto b) -> bool { return a.second > b.second; });
  ll cnt_salty = 0;

  for (int i = 0; i < N && Y >= 0; i++) {
    cnt_salty++;
    Y -= dish[i].second;
  }

  cout << min(cnt_sweet, cnt_salty) << '\n';

  return 0;
}
