#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

 void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int N;
  cin >> N;

  int first = 2, second = 3;
  cout << first << " " << second << " ";

  for (int i = 1; i <= N - 2; i++) {
    int temp = second;
    while(((3 * second) % (temp + first) == 0 || second == temp)) {
      second++;
    }

    first = temp;
    cout << second << " ";
  }

  print();
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
