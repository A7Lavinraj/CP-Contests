#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a--, b--, c--, d--;
  vector<int> A, B;

  for (int i = a; i != b; i = (i + 1) % 12)
    A.push_back(i);

  for (int i = b; i != a; i = (i + 1) % 12)
    B.push_back(i);

  auto _find = [](int X, vector<int> Y) -> bool {
    for (int i = 0; i < (int)Y.size(); i++)
      if (Y[i] == X)
        return true;

    return false;
  };

  cout << ((_find(c, A) && _find(d, A)) || (_find(c, B) && _find(d, B)) ? "NO"
                                                                        : "YES")
       << "\n";
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
