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

  string s;
  cin >> s;
  vector<int> h(26, 0);

  for (int i = 0; i < len(s); i++)
    h[s[i] - 'a']++;

  vector<int> cnt(len(s) + 1);

  for (int i = 0; i < 26; i++)
    if (h[i])
      cnt[h[i]]++;

  cout << (count(cnt.begin(), cnt.end(), 0) +
                       count(cnt.begin(), cnt.end(), 2) ==
                   len(s) + 1
               ? "Yes"
               : "No")
       << endl;

  return 0;
}
