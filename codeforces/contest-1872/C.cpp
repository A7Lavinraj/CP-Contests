#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

#define LOOP(i, low, high, shift) for (ll i = low; (low == high ? false : (low < high ? i < high : i >= high)); (low < high ? i += shift : i -= shift))
#define LOOP1(high) LOOP(i, 0, high, 1)
#define LOOP2(i, high) LOOP(i, 0, high, 1)
#define LOOP3(i, low, high) LOOP(i, low, high, 1)
#define LOOP4(i, low, high, shift) LOOP(i, low, high, shift)
#define FIFTH_ARG(a, b, c, d, e, ...) e
#define GET_LOOP(...) FIFTH_ARG(__VA_ARGS__, LOOP4, LOOP3, LOOP2, LOOP1)
#define For(...) GET_LOOP(__VA_ARGS__)(__VA_ARGS__)

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
#define dbg(x...) cerr << "\e[34m"<<__func__<<":"<<__LINE__<<" [" << #x << "]\e[39m = \e[32m ["; dbg(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...) 32
#endif

struct sieve {
  vector<bool> is_prime;
  sieve(size_t N = 100) {
    is_prime.assign(N + 1, true);

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= N; i++) {
      for (int j = 2; i * j <= N; j++) {
        is_prime[i * j] = false;
      }
    }
  }

  vector<int> get_primes_array() {
    vector<int> primes;
    for (int i = 2; i <= int(is_prime.size()); i++) {
      if (is_prime[i]) primes.push_back(i);
    }

    return primes;
  }

  vector<bool> get_bool_array() {
    return is_prime;
  }
};

vector<int> v;

void solve() {
  int l, r;
  cin >> l >> r;

  For (i, l, r + 1) {
    if (i % 2 == 0 && i / 2 > 1) {
      print(i / 2, i / 2);
      return;
    }
  }

  if ((l + 1) < r && (l + 1) / 2 > 1) {
    print((l + 1) / 2, (l + 1) / 2);
    return;
  }

  for (int i : v) {
    if (i == l) break;
    if (l % i == 0) {
      print(l - i, i);
      return;
    }
  }

  print(-1);
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  sieve sv(10000000);
  v = sv.get_primes_array();

  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
