#include <bits/stdc++.h>
using namespace std;

void testcase() { 
  long long N, K, Q;
  cin >> N >> K >> Q;
  vector<pair<long long, long long>> signs(K);

  for (int i = 0; i < K; i++)
    cin >> signs[i].first;

  for (int i = 0; i < K; i++)
    cin >> signs[i].second;

  signs.insert(signs.begin(), make_pair(0LL, 0LL));

  while (Q--) {
    long long D;
    cin >> D;
    auto lb = lower_bound(signs.begin(), signs.end(), make_pair(D, 0LL));

    if (lb->first == D) {
      cout << lb->second << " ";
    } else {
      pair<long long, long long> end = *lb;
      pair<long long, long long> start = *(--lb);

      cout << (start.second + ((end.second - start.second) * (D - start.first)) / (end.first - start.first)) << " ";
    }
  }

  cout << "\n";
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
