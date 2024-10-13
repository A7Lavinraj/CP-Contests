#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  int n;
  string a, b;
  cin >> n >> a >> b;

  for (int i = 0; i < n; i++) {
    int initial = (b[i] - a[i] + 26) % 26;
    
    while(initial % 3 != 0) {
      initial += 26;
    }

    cout << initial / 3 << ' ';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase(); cout << '\n';
  }
  return 0;
}
