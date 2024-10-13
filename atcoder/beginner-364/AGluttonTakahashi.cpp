#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> dishes(n);

  for (string &s : dishes)
    cin >> s;

  for (int i = 0; i < n - 1; i++)
    if (dishes[i] == dishes[i + 1] && dishes[i] == "sweet" && i != n - 2) {
      cout << "No" << '\n';
      return 0;
    }

  cout << "Yes" << '\n';

  return 0;
}
