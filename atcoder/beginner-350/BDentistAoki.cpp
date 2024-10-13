#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;
  vector<int> a(n + 1, 0);

  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    a[x] ^= 1;
  }

  cout << (n - (int)count(a.begin(), a.end(), 1)) << '\n';

  return 0;
}
