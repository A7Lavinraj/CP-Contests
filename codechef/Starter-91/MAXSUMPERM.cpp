#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
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

template <typename T = int> void vector_out(vector<T> output) {
  for (T iterator : output) {
    cout << iterator << " ";
  }
  cout << "\n";
}

void solve(){
  int n, q;
  cin >> n >> q;

  vector<int> v(n);

  for (int &i : v)
    cin >> i;

  vector<int> d(n + 1, 0);

  vector<pair<int, int>> que;

  while(q--) {
    int l, r;
    cin >> l >> r;
    que.push_back({l, r});
    --l, --r;
    d[l]++;
    d[r + 1]--;
  }

  for (int i = 1; i < n + 1; i++) {
    d[i] += d[i - 1];
  }
  d.pop_back();

  sort(v.begin(), v.end());
  int low = 0, high = n - 1;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (d[i] > 0) {
      d[i] = v[high];
      high--;
    }
    else {
      d[i] = v[low];
      low++;
    }
  }

  vector<int> pre = d;

  for (int i = 1; i < n; i++) {
    pre[i] += pre[i - 1];
  }

  pre.insert(pre.begin(), 0);

  dbg(pre);

  for (auto i : que) {
    sum += pre[i.second] - pre[i.first - 1];
    dbg(pre[i.second], pre[i.first - 1]);
    dbg(pre[i.second] - pre[i.first - 1]);
  }

  print(sum);
  vector_out(d);
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
