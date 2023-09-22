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

  vector<int> v(n);

  for (int &i : v)
    cin >> i;

  auto calc = [](vector<int>& v) -> int {
    int mul = 1;

    for (int i : v)
      mul *= i;

    return mul;
  };

  int answer = calc(v);

  for (int i = 0; i < n; i++) {
    v[i]++;
    answer = max(answer, calc(v));
    v[i]--;
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
