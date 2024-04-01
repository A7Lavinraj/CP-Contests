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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t A, B, C;
  cin >> A >> B >> C;

  if ((__builtin_popcountll(C) % 2LL != (A + B) % 2LL) ||
      A + B < __builtin_popcountll(C)) {
    cout << -1 << '\n';
  } else {
    int64_t a = A - (A + B - __builtin_popcountll(C)) / 2;
    int64_t b = B - (A + B - __builtin_popcountll(C)) / 2;

    if (a + b != __builtin_popcountll(C) || a < 0 || b < 0) {
      cout << -1 << '\n';
    } else {
      int64_t X = 0LL, Y = 0LL;
      int64_t i;

      for (i = 0; a; i++) {
        if (C >> i & 1LL) {
          X |= (1LL << i);
          a--;
        }
      }

      for (; b; i++) {
        if (C >> i & 1LL) {
          Y |= (1LL << i);
          b--;
        }
      }

      int64_t cnt = (A + B - __builtin_popcountll(C)) / 2LL;

      for (i = 0LL; i < 64LL && cnt; i++) {
        if (!(X >> i & 1LL) && !(Y >> i & 1LL)) {
          X |= (1LL << i);
          Y |= (1LL << i);
          cnt--;
        }
      }

      if (cnt > 0) {
        cout << -1;
        return 0;
      }

      cout << X << ' ' << Y << '\n';
    }
  }

  return 0;
}
