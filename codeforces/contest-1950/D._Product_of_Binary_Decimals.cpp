#include <bits/stdc++.h>
using namespace std;

template <typename A, typename B> string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string &s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string)s); }

string to_string(bool b) { return (b ? "true" : "false"); }

string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}

template <size_t N> string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) {
    res += static_cast<char>('0' + v[i]);
  }
  return res;
}

template <typename A> string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

template <typename A, typename B> string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " +
         to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " +
         to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

#ifdef DEBUG
#define dbg(...)                                                               \
  cerr << "DEBUG: [" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

vector<int> nums;

void solve() {
  int n;
  cin >> n;

  auto bin = [](int x) -> bool {
    while (x) {
      int dig = x % 10;

      if (dig != 0 && dig != 1)
        return false;

      x /= 10;
    }

    return true;
  };

  while (!bin(n)) {
    bool status = false;

    for (int i : nums) {
      if (n % i == 0) {
        n /= i;
        status = true;
        break;
      }
    }

    if (!status)
      break;
  }

  cout << (bin(n) ? "YES" : "NO");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  auto bin = [](int x) -> bool {
    while (x) {
      int dig = x % 10;

      if (dig != 0 && dig != 1)
        return false;

      x /= 10;
    }

    return true;
  };

  for (int i = 10; i <= 1e5; i++) {
    if (bin(i))
      nums.push_back(i);
  }

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    solve();
    cout << '\n';
  }

  return 0;
}
