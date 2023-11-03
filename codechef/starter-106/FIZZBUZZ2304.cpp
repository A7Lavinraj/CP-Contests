#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int N, K;
  cin >> N >> K;
  vector<int> arr(N);

  for (int i = 0; i < N; i++)
    cin >> arr[i];

  int answer = 0;

  for (int i = 0; i <= N - K; i++) {
    bool ok = false;
    for (int j = i; j < i + K; j++) {
      if (arr[j] & 1) {
        ok = true;
        break;
      }
    }

    answer += ok;
  }

  print(answer);
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
