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
  string S;
  cin >> S;
  int curr_pos = 1;

  int answer = 0;

  for (auto c : S) {
    if (c == '0') {
      answer += abs(curr_pos - 10) + 1;
      curr_pos = 10;
    }
    else {
      answer += abs(curr_pos - c + '0') + 1;
      curr_pos = c - '0';
    }
  }

  print(answer);
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
