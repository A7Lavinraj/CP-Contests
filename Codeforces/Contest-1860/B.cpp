#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void debug(int x) {cerr << x;}
void debug(long x) {cerr << x;}
void debug(long long x) {cerr << x;}
void debug(unsigned x) {cerr << x;}
void debug(unsigned long x) {cerr << x;}
void debug(unsigned long long x) {cerr << x;}
void debug(float x) {cerr << x;}
void debug(double x) {cerr << x;}
void debug(long double x) {cerr << x;}
void debug(char x) {cerr << '\'' << x << '\'';}
void debug(const char *x) {cerr << '\"' << x << '\"';}
void debug(const string &x) {cerr << '\"' << x << '\"';}
void debug(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>void debug(const pair<T, V> &x);
template<typename T>void debug(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), debug(i); cerr << "}";}
template<typename T, typename V>void debug(const pair<T, V> &x) {cerr << '{'; debug(x.first); cerr << ", "; debug(x.second); cerr << '}';}
template<typename ST> void debug(stack<ST> st) { cerr << " "; while(!st.empty()) { cerr << st.top() << " "; st.pop(); }}
template<typename Q> void debug(queue<Q> que) { while(!que.empty()) { cerr << que.front() << " "; que.pop(); }}
template<typename DQ> void debug(deque<DQ> dque) { while(!dque.empty()) { cerr << dque.front() << " "; dque.pop_front(); }}
void dbg() {cerr << "]\n";}template <typename T, typename... V>void dbg(T t, V... v) {debug(t); if (sizeof...(v)) cerr << ", "; dbg(v...);}

#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...) 32
#endif

void solve(){
  int n, k, a, b;
  cin >> n >> k >> a >> b;

  int coins = 0;
  int ans = 0;
  coins = n % k;

  ans = (coins > a ? coins - a : 0);
  a -= coins;
  int diff = 0;

  if (a > 0) {
    diff = a / k;
  }


  coins = n / k - diff;
  dbg(ans);

  ans += (coins > b ? coins - b : 0);

  dbg(ans - diff);
  print(ans);
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
