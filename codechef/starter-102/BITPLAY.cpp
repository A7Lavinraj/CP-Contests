#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

const int MOD = int(1e9) + 7;

void solve() {
  int N;
  string S;
  cin >> N >> S;

  int64_t answer = 1;

  auto operations = [](int A, int B, int C) -> int {
    int counter = 0;

    counter += C == (A ^ B);
    counter += C == (A | B);
    counter += C == (A & B);

    return counter;
  };

  for (int i = 2; i < int(S.size()); i += 2) {
     answer = (answer * int64_t(1) * operations(S[i - 2] - '0', S[i - 1] - '0', S[i] - '0')) % MOD;
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
