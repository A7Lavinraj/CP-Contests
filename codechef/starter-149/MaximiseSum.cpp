#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  sort(A.begin(), A.end());
  vector<int64_t> pos, neg;

  for (int i = 0; i < N; i++)
    if (A[i] >= 0)
      pos.push_back(A[i]);
    else
      neg.push_back(A[i]);

  if ((int)pos.size() == 0) {
    int64_t sum = 0;

    for (int i = 0; i < N - 1; i++)
      sum += abs(A[i]);

    cout << (N & 1 ? sum + A[N - 1] : sum + abs(A[N - 1])) << '\n';
  } else if ((int)neg.size() & 1) {
    int64_t sum = 0;

    for (int i = 0; i < neg.size() - 1; i++)
      sum += abs(neg[i]);

    for (int i = 1; i < pos.size(); i++)
      sum += pos[i];

    if (abs(neg.back()) > pos.front()) {
      sum += abs(neg.back());
      sum -= pos.front();
    } else {
      sum += neg.back() + pos.front();
    }

    cout << sum << '\n';
  } else {
    int64_t sum = 0;

    for (int i = 0; i < N; i++)
      sum += abs(A[i]);

    cout << sum << '\n';
  }
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
