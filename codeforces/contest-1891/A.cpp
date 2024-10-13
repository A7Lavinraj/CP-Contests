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
  int N;
  cin >> N;
  vector<int> arr(N);

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  int index = 0;

  for (int i = 0; i < N; i++) {
    if (1 << i > N) {
      index = i - 1;
      break;
    }
  }

  bool answer = true;

  auto check = [&](int from , int to) -> bool {
    for (int i = from; i < to; i++) {
      if (arr[i] > arr[i + 1])
        return false;
    }

    return true;
  };

  for (int i = 2; i <= index; i++) {
    answer &= check((1 << (i - 1)), (1 << i) - 1);
    dbg((1 << (i - 1)), (1 << i) - 1, answer);
  }

  answer &= check(1 << index, N - 1);

  print(answer ? "YES" : "NO");
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
