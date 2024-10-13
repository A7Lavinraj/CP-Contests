#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int L, R;
  cin >> L >> R;
  cout << (L == R ? "Invalid" : L == 1 ? "Yes" : "No") << '\n';

  return 0;
}
