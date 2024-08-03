#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int Y;
  cin >> Y;

  if (Y % 4 != 0)
    cout << 365 << '\n';
  else if (Y % 4 == 0 && Y % 100 != 0)
    cout << 366 << '\n';
  else if (Y % 100 == 0 && Y % 400 != 0)
    cout << 365 << '\n';
  else
    cout << 366 << '\n';

  return 0;
}
