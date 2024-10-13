#include <bits/stdc++.h>
#define ll long long
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

const vector<pair<int, int>> d4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
const vector<pair<int, int>> d8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

ll sum = 0;
int n, m;

bool bound(int i, int j) {
  return i < n && i >= 0 && j < m && j >= 0;
}

void dfs(int i, int j, vector<vector<int>>& lake, vector<vector<bool>>& vis) {
  vis[i][j] = true;
  dbg(i, j);
  sum += lake[i][j];

  for (pair<int, int> d : d4) {
    if (bound(d.first + i, d.second + j) && !vis[d.first + i][d.second + j] && lake[i][j] ^ 0) {
      dfs(i + d.first, j + d.second, lake, vis);
    }
  }
}

void solve(){
  cin >> n >> m;
  vector<vector<int>> lake(n, vector<int>(m, 0));
  vector<vector<bool>> vis(n, vector<bool>(m, false));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> lake[i][j];
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (lake[i][j] ^ 0 && !vis[i][j]) {
        dfs(i, j, lake, vis);
        dbg(ans, sum);
        ans = max(ans, sum);
        sum = 0;
      }
    }
  }

  print(ans);
}

int main() { 
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int t = 1;
	cin >> t;
 	for (int i = 1; i <= t; i++) {
		//cout << "Case #" << i << ": ";
        solve();
	}
	return 0;
}
