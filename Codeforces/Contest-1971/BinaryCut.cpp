#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  string S;
  cin >> S;
  vector<pair<char, int>> encoding;
  int cnt = 0;
  char chr = S[0];

  auto sorted = [](string X) -> bool {
    for (int i = 0; i < (int) X.size() - 1; i++)
      if (X[i] > X[i + 1])
        return false;

    return true;
  };

  if (sorted(S)) {
    cout << 1 << "\n";
    return;
  }

  for (int i = 0; i < (int) S.size(); i++) {
    if (S[i] == chr)
      cnt++;
    else {
      encoding.push_back({chr, cnt});
      chr = S[i];
      cnt = 1;
    }
  }

  encoding.push_back({chr, cnt});
  pair<int, int> maximum = {0, 0};

  for (int i = 0; i < (int) encoding.size() - 1; i++)
    if (encoding[i].first == '0' && encoding[i + 1].second == '1' && maximum.second < encoding[i].second + encoding[i + 1].second)
      maximum = {i, encoding[i].second + encoding[i + 1].second};

  int ans = 0;

  for (int i = 0; i < (int) encoding.size(); i++) {
    if (i == maximum.first || i == maximum.first + 1)
      continue;

    ans++;
  }

  cout << max(ans, 1) + int(!sorted(S)) << "\n";
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
