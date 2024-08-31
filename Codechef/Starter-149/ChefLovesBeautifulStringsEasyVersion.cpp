#include <bits/stdc++.h>
using namespace std;

template <typename T, typename T_iterable>
vector<pair<T, int64_t>> run_length_encoding(T_iterable &items) {
  vector<pair<T, int64_t>> encoding;
  T character = items[0];
  int count = 0;

  for (char &item : items) {
    if (character == item) {
      count++;
    } else {
      encoding.emplace_back(character, count);
      count = 1;
      character = item;
    }
  }

  encoding.emplace_back(character, count);
  return encoding;
}

void testcase() {
  int64_t N;
  string S;
  cin >> N >> S;
  vector<pair<char, int64_t>> encoding = run_length_encoding<char>(S);
  sort(
      encoding.begin(), encoding.end(),
      [](const auto &a, const auto &b) -> bool { return a.second < b.second; });

  int64_t score = 0;

  for (int i = 0; i < (int)encoding.size(); i++)
    score += (encoding[i].second - 1) * int64_t(encoding.size() - 1);

  for (int i = 0; i < (int)encoding.size() - 1; i++)
    score += encoding.size() - i - 2LL;

  cout << score << '\n';
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
