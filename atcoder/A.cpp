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

  int N;
  string S;
  cin >> N >> S;

  for (int i = 0; i < N - 2; i++) {
    if (S.substr(i, 3) == "ABC") {
      print(i + 1);
      return 0;
    }
  }

  print(-1);

  return 0;
}
