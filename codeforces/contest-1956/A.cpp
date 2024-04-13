#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define len(x) int((x).size())
#define endl '\n'

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
  os << '{';
  string sep;
  for (const T &x : v)
    os << sep << x, sep = ", ";
  return os << '}';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#ifdef DEBUG
#define dbg(...)                                                               \
  cerr << "line: " << __LINE__ << " (" << #__VA_ARGS__ << "):",                \
      dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void solve() {
  int K, Q;
  cin >> K >> Q;
  vector<int> players(K), queries(Q);

  for (int &p : players)
    cin >> p;

  for (int &q : queries)
    cin >> q;

  auto lb = [&](int element) -> int {
    int res = 0;

    for (int i = 0; i < K; i++)
      if (element >= players[i])
        res = i + 1;

    return res;
  };

  for (int i = 0; i < Q; i++) {
    while (true) {
      int l = lb(queries[i]);

      if (l == 0)
        break;
      else
        queries[i] -= l;
    }

    cout << queries[i] << " ";
  }

  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}
