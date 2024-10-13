#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  auto check = [&](int p, int b, int h) -> bool { return h == p + b; };

  auto dist = [&](int a, int b, int x, int y) -> int {
    return (x - a) * (x - a) + (y - b) * (y - b);
  };

  int P = dist(a, b, c, d), B = dist(a, b, e, f), H = dist(c, d, e, f);

  cout << ((check(P, B, H) || check(B, H, P) || check(H, P, B)) ? "Yes" : "No")
       << '\n';

  return 0;
}
