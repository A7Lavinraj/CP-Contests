#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

const vector<pair<int, int>> d4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
const vector<pair<int, int>> d8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

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

bool check_or(string a, string b) {
  return (a[0] == '1' || b[0] == '1') && (a[1] == '1' || b[1] == '1');
}

void solve(){
  int n;
  cin >> n;
  vector<pair<int, string>> books(n);

  for (auto &i : books) {
    cin >> i.first >> i.second;
  }

  sort(books.begin(), books.end(), [&](auto &a, auto &b) { return a.first < b.first;});

  int another = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (books[i].second == "11") {
      another = books[i].first;
      break;
    }
  }

  pair<int, string> checker = {0, "00"};
  int ans = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (books[i].second[0] == '1') {
      checker.second[0] = '1';
      checker.first = books[i].first;
      dbg(checker);
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (books[i].second[1] == '1') {
      checker.second[1] = '1';
      checker.first += books[i].first;
      dbg(checker);
      break;
    }
  }

  dbg(checker, another);
  if (checker.second != "11" && another == INT_MAX) {
    print(-1);
  }
  else print(min(another, checker.first));
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
