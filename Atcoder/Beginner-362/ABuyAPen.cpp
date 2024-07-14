#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;
  string s;
  cin >> s;

  if (s == "Red")
    cout << min(b, c) << '\n';
  else if (s == "Blue")
    cout << min(a, b) << '\n';
  else
    cout << min(a, c) << '\n';

  return 0;
}
