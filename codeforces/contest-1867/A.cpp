#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

#define LOOP(i, low, high, shift) for (ll i = low; (low == high ? false : (low < high ? i < high : i >= high)); (low < high ? i += shift : i -= shift))
#define LOOP1(high) LOOP(i, 0, high, 1)
#define LOOP2(i, high) LOOP(i, 0, high, 1)
#define LOOP3(i, low, high) LOOP(i, low, high, 1)
#define LOOP4(i, low, high, shift) LOOP(i, low, high, shift)
#define FIFTH_ARG(a, b, c, d, e, ...) e
#define GET_LOOP(...) FIFTH_ARG(__VA_ARGS__, LOOP4, LOOP3, LOOP2, LOOP1)
#define For(...) GET_LOOP(__VA_ARGS__)(__VA_ARGS__)

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

template <typename T> void print(vector<T> output) {
  for (T iterator : output) {
    cout << iterator << " ";
  }
  cout << "\n";
}

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);

  For (n) {
    cin >> v[i].first;
    v[i].second = i;
  }

  sort(all(v), [](auto a, auto b){ return a.first > b.first; });

  dbg(v);

  vector<int> answer(n);

  For (n) {
    dbg(v[i].first, i + 1);
    answer[v[i].second] = i + 1;
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
