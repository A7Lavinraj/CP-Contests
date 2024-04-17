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
  string alice, bob;

  for (int i = 0; i < 3; i++) {
    char c;
    cin >> c;
    alice.push_back(c);
  }
  for (int i = 0; i < 3; i++) {
    char c;
    cin >> c;
    bob.push_back(c);
  }

  sort(alice.begin(), alice.end(), greater<int>());
  sort(bob.begin(), bob.end(), greater<int>());

  print(stoi(alice) == stoi(bob) ? "Tie" : stoi(alice) > stoi(bob) ? "Alice" : "Bob");
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
