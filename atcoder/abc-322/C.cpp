#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int64_t((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int64_t N, M;
  cin >> N >> M;
  vector<int64_t> fireworks(M);

  for (int64_t i = 0; i < M; i++) {
    cin >> fireworks[i];
  }

  vector<int64_t> days(N + 2);
  days[fireworks[0] + 1] -= fireworks[0];
  days[0] += fireworks[0];

  for (int64_t i = 1; i < M; i++) {
    days[fireworks[i - 1] + 1] += fireworks[i];
    days[fireworks[i] + 1] -= fireworks[i];
  }

  for (int64_t i = 1; i < len(days); i++) {
    days[i] += days[i - 1];
  }

  for (int64_t i = 1; i <= N; i++) {
    print(abs(days[i] - i));
  }

  return 0;
}
