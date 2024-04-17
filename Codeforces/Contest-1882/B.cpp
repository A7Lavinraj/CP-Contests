#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif

using namespace std;

void print(){cout << "\n";}template<typename T> void print(vector<T> &v) {for (auto &x : v) cout << x << " "; print();}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

int64_t answer = 0;
int64_t counter = 0;

void recurse(int64_t combined, int index, vector<int64_t>& sets) {
  if (index == int(sets.size()))
    return;

  if (__builtin_popcountll(answer) < __builtin_popcountll(combined))
    counter = max(counter, int64_t(__builtin_popcountll(answer)));

  recurse(combined, index + 1, sets);
  answer |= sets[index];
  recurse(combined, index + 1, sets);
}

void solve() {
  int64_t n;
  cin >> n;

  vector<int64_t> sets(n, 0);
  int64_t combined = 0;

  for (int64_t i = 0; i < n; i++) {
    int64_t sz;
    cin >> sz;

    for (int64_t j = 0; j < sz; j++) {
      int64_t value;
      cin >> value;

      combined |= (1 << value);
      sets[i] = (sets[i] | (1 << value));
    }

  }

  for (int i = 0; i < 29; i++) {
    cout << (combined >> i & 1);
  }
  print();

  answer = 0, counter = 0;
  recurse(combined, 0, sets);

  print(counter);
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
