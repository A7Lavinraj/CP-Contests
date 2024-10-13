#include <bits/stdc++.h>

#define ll int64_t
#define len(x) int((x).size())

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  string s;
  cin >> n >> k >> s;
  sort(s.begin(), s.end());

  auto is_palindrome = [&](int a, int b) -> bool {
    while (a < b) {
      if (s[a] != s[b])
        return false;

      a++, b--;
    }
    return true;
  };

  auto check = [&]() -> int {
    for (int i = 0; i < len(s) - k + 1; i++) {
      if (is_palindrome(i, i + k - 1))
        return 0;
    }

    return 1;
  };

  int cnt = 0;

  do {
    cnt += check();
  } while (next_permutation(s.begin(), s.end()));

  cout << cnt << '\n';

  return 0;
}
