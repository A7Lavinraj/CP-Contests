#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, T, A;
  cin >> N >> T >> A;
  cout << (N / 2 < T || N / 2 < A ? "Yes" : "No") << '\n';

  return 0;
}
