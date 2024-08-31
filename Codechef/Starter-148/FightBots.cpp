#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n, x, y;
  string s;
  cin >> n >> x >> y >> s;
  pair<int, int> alice = {0, 0};

  for (int i = 0; i < (int)s.size(); i++)
    if (s[i] == 'L')
      alice.first--;
    else if (s[i] == 'R')
      alice.first++;
    else if (s[i] == 'U')
      alice.second++;
    else
      alice.second--;

  int dist = abs(alice.first - x) + abs(alice.second - y);
  cout << (dist <= n && (n - dist) % 2 == 0 ? "Yes" : "No") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
