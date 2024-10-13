#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  unordered_map<int, int> freq;

  for (int i = 0; i < n; i++)
    freq[a[i]]++;

  int maximum = INT_MIN;

  for (auto i : freq)
    maximum = max(maximum, i.second);

  cout << ((int)a.size() - maximum) << '\n';
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
