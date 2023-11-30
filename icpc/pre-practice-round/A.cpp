#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);

  for (int &i : a)
    cin >> i;

  for (int &i : b)
    cin >> i;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i = 0; i < N; i++) {
    if (a[i] > b[i]) {
      cout << "NO" << '\n';
      return;
    }
  }

  map<int, int> occurance;

  for (int i = 0; i < N; i++) {
    occurance[a[i]]++;
  }

  for (auto i : occurance) {
    if (((N & 1) && (i.second > (N / 2 + 1))) || (N % 2 == 0 && (i.second > N / 2))) {
      cout << "NO" << '\n';
      return;
    }
  }

  cout << "YES" << '\n';
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
