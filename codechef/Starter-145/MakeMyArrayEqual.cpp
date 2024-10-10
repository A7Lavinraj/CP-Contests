#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  set<int> st = set<int>(a.begin(), a.end());

  if (len(st) > 2) {
    cout << "NO" << '\n';
  } else if (len(st) == 1) {
    cout << "YES" << '\n';
  } else {
    if (st.find(0) == st.end()) {
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
    }
  }
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
