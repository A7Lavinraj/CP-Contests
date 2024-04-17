#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void DBG(int x) {cerr << x;}
void DBG(long x) {cerr << x;}
void DBG(long long x) {cerr << x;}
void DBG(unsigned x) {cerr << x;}
void DBG(unsigned long x) {cerr << x;}
void DBG(unsigned long long x) {cerr << x;}
void DBG(float x) {cerr << x;}
void DBG(double x) {cerr << x;}
void DBG(long double x) {cerr << x;}
void DBG(char x) {cerr << '\'' << x << '\'';}
void DBG(const char *x) {cerr << '\"' << x << '\"';}
void DBG(const string &x) {cerr << '\"' << x << '\"';}
void DBG(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>void DBG(const pair<T, V> &x);
template<typename T>void DBG(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), DBG(i); cerr << "}";}
template<typename T, typename V>void DBG(const pair<T, V> &x) {cerr << '{'; DBG(x.first); cerr << ", "; DBG(x.second); cerr << '}';}
void dbg() {cerr << "]\n";}template <typename T, typename... V>void dbg(T t, V... v) {DBG(t); if (sizeof...(v)) cerr << ", "; dbg(v...);}
#ifdef RECB
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...) 32
#endif

void solve(){
  int n;
  cin >> n;
  string bin;
  cin >> bin;

  vector<char> str1(n), str2(n);
  str1[n - 1] = '0', str2[n - 1] = '1';
  char tracker;

  // for str1
  tracker = '0';
  for (int i = n - 2; i >= 0; i--) {
    str1[i] = char((tracker - '0') ^ (bin[i] - '0') + '0');
    tracker = str1[i];
  }

  tracker = '1';
  for (int i = n - 2; i >= 0; i--) {
    str2[i] = char((tracker - '0') ^ (bin[i] - '0') + '0');
    tracker = str2[i];
  }

  dbg(str1, str2);

  print(max(count(str1.begin(), str1.end(), '1'), count(str2.begin(), str2.end(), '1')));
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
