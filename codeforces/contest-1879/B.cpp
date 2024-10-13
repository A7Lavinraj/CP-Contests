#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve() {
  int64_t n;
  cin >> n;
  vector<int64_t> a(n), b(n);

  for (int64_t &x : a)
    cin >> x;

  for (int64_t &x : b)
    cin >> x;

  int64_t Amin = *min_element(a.begin(), a.end());
  int64_t Bmin = *min_element(b.begin(), b.end());

  int64_t Asum = accumulate(a.begin(), a.end(), int64_t(0));
  int64_t Bsum = accumulate(b.begin(), b.end(), int64_t(0));

  print(min(Asum + Bmin * n, Bsum + Amin * n));
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
