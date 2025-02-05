#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> er(n);

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;

    for (int j = 0; j < v; j++) {
      int x, y;
      cin >> x >> y;
      er[i].emplace_back(x, y);
    }
  }

  vector<vector<int>> side(n);

  auto sq = [](int x) -> int {
    return x * x;
  };

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (int)er[i].size(); j++) {
      int next = (j + 1) % (int)er[i].size();
      side[i].push_back(sq(abs(er[i][j].first - er[i][next].first)) + sq(abs(er[i][j].second - er[i][next].second)));
    }
  }

  auto eq = [](vector<int> a, vector<int> b) -> bool {
    for (int i = 0; i < (int)a.size(); i++) {
      b.push_back(b.front());
      b.erase(b.begin());
      bool ok = true;

      for (int j = 0; j < (int)a.size(); j++) {
        if (a[j] != b[j]) {
          ok = false;
          break;
        }
      }

      if (ok) {
        return true;
      }
    }

    return false;
  };

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((int)side[i].size() != (int)side[j].size())
        continue;

      if (eq(side[i], side[j])) {
        cout << i + 1 << " " << j + 1 << '\n';
        return 0;
      }
    }
  }

  assert(false);

  return 0;
}
