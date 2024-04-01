#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  bool cond1 = true, cond2 = true;

  for (int i = 0; i < N; i++) {
    if (S[i] != T[i]) {
      cond1 = false;
      break;
    }
  }

  for (int i = 0; i < N; i++) {
    if (S[i] != T[i + M - N]) {
      cond2 = false;
      break;
    }
  }

  if (cond1 && cond2)
    print(0);
  else if (cond1)
    print(1);
  else if (cond2)
    print(2);
  else 
    print(3);

  return 0;
}
