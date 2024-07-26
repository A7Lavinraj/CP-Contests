#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n, k;
  cin >> n >> k;
  vector<string> grid(n);

  for (int i = 0; i < n; i++)
    cin >> grid[i];

  vector<string> reduced(n / k);
  int index = 0;

  for (int i = 0; i < n; i += k) {
    for (int j = 0; j < n - k + 1; j += k) {
      if (grid[i][j] == '0')
        reduced[index].push_back('0');
      else
        reduced[index].push_back('1');
    }

    index++;
  }

  for (int i = 0; i < len(reduced); i++)
    cout << reduced[i] << "\n";
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
