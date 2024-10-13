#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n;
  cin >> n;
  vector<array<int, 2>> participant(n);

  for (int i = 0; i < n; i++) 
    cin >> participant[i][0] >> participant[i][1];

  int polycarp = participant[0][1];

  for (int i = 1; i < n; i++) {
    if (participant[i][0] >= participant[0][0]) {
      if (polycarp <= participant[i][1]) {
        print(-1);
        return;
      }
    }
  }

  print(participant[0][0]);
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
