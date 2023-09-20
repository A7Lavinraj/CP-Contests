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
template<typename T>void debug(const T &x) {int comma = 0; cerr << '{'; for (auto &i: x) cerr << (comma++ ? ", " : ""), debug(i); cerr << "}";}
template<typename T, typename V>void debug(const pair<T, V> &x) {cerr << '{'; debug(x.first); cerr << ", "; debug(x.second); cerr << '}';}
template<typename ST> void debug(stack<ST> st) { cerr << " "; while(!st.empty()) { cerr << debug(st.top()) << " "; debug(st.pop()); }}
template<typename Q> void debug(queue<Q> que) { while(!que.empty()) { cerr << debug(que.front()) << " "; debug(que.pop()); }}
template<typename DQ> void debug(deque<DQ> dque) { while(!dque.empty()) { cerr << debug(dque.front()) << " "; debug(dque.pop_front()); }}
void dbg() {cerr << "]\n";}template <typename T, typename... V>void dbg(T t, V... v) {debug(t); if (sizeof...(v)) cerr << ", "; dbg(v...);}

#ifdef DEBUG
#define dbg(x...) cerr << "\e[34m"<<__func__<<"():"<<__LINE__<<" [" << #x << "]\e[39m = \e[32m ["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...) 32
#endif

void solve(){
  int N, P, I;
  cin >> N >> P >> I;

  vector<int> v(N);
  for (int &i : v) cin >> i;

  sort(all(v), greater<int>());

  int sum = 0;
  for (int i = I - 1; i < N; i += P) {
    sum += v[i];
  }

  print(sum);
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
