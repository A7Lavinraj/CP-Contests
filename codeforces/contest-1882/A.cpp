#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

 void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (int &i : v)
    cin >> i;

  map<int, bool> mp;

  for (int i : v)
    mp[i] = true;

  int counter = 0, answer = 1;
  dbg(mp);
  while(counter < n) {
    if (v[counter] == answer) {
      answer++;
    }
    else {
      counter++;
      answer++;
    }
    dbg(answer, counter);
  }

  print(answer - 1);
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
