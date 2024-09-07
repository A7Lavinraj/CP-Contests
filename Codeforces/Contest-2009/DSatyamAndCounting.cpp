#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int N;
  cin >> N;
  vector<pair<int, int>> points(N);

  for (int i = 0; i < N; i++)
    cin >> points[i].first >> points[i].second;

  sort(points.begin(), points.end());
  int valid = 0;

  for (int i = 0; i < N - 1; i++)
    if (points[i].first == points[i + 1].first)
      valid += N - i - 2;

  int low = 0, high = 0;

  while (high < N) {
    while (high + 1 < N && (points[high + 1].first - points[low].first) <= 2)
      high++;

    if (points[high].second == points[low].second)
      for (int i = low + 1; i < high; i++)
        valid += int(points[i].second != points[low].second);

    while (low < high && (points[high].first - points[low].first) == 2)
      low++;
  }

  cout << valid << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
