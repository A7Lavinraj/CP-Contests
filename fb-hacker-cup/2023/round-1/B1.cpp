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
  int64_t N;
  cin >> N;

  vector<int64_t> answer;

  int64_t temp = N;

  for (int64_t i = 2; i <= N; i++) {
    if (temp == 1)
      break;

    while(temp % i == 0) {
      answer.push_back(i);
      temp /= i;
    }
  }

  if (accumulate(answer.begin(), answer.end(), int64_t(0)) > 41 || len(answer) > 100) {
    print(-1);
    return;
  }

  cout << len(answer) + 41 - accumulate(answer.begin(), answer.end(), int64_t(0)) << " ";

  for (int64_t i : answer)
    cout << i << " ";

  for (int64_t i = 0; i < 41 - accumulate(answer.begin(), answer.end(), int64_t(0)); i++) {
    cout << 1 << " ";
  }
  print();
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
