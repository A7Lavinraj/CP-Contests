#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  cout << (100 - n % 100) << '\n';

  return 0;
}
