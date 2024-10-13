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
  string S;
  cin >> N >> K >> S;

  int required_length = len(S) - K;

  int hash[26] = {0};

  for (int i = 0; i < len(S); i++)
    hash[S[i] - 'a']++;

  int odd = 0, even = 0;

  for (int i = 0; i < 26; i++) {
    odd += hash[i] & 1;
    even += hash[i] % 2 == 0;
  }

  if (N == K + 1) {
    print("YES");
    return;
  }

  if (K == odd) {
    print("YES");
  }
  else if (K > odd) {
    print("YES");
  }
  else print(odd - K == 1 ? "YES" : "NO");
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
