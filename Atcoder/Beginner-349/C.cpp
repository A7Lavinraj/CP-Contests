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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;

  for (int i = 0; i < len(a); i++)
    a[i] = (char)toupper(a[i]);

  auto is_subseq = [](string x, string y) -> bool {
    int first = 0, second = 0;

    while (first < len(x) && second < len(y)) {
      if (x[first] == y[second]) {
        first++, second++;
      } else
        first++;
    }

    return second == len(y);
  };

  if (b.back() == 'X') {
    cout << (is_subseq(a, b.substr(0, 2)) ? "Yes" : "No") << endl;
  } else {
    cout << (is_subseq(a, b) ? "Yes" : "No") << endl;
  }

  return 0;
}
