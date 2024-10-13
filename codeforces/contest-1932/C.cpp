#include <bits/stdc++.h>
using namespace std;

string to_string(string s) {
  return '"' + s + '"';
}

string to_string(const char* s) {
  return to_string((string) s);
}

string to_string(bool b) {
  return (b ? "true" : "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
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

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

#ifdef DEBUG
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

struct Segment_tree {
  std::vector<int64_t> tree, lazy;

  Segment_tree(int64_t N = 200200) {
    tree.resize(4 * N, 1);
    lazy.resize(4 * N, 1);  // Initialize lazy with 1 for multiplication identity
  }

  void build(std::vector<int64_t>& container, int64_t node, int64_t begin, int64_t end, const int64_t MOD) {
    if (begin == end)
      tree[node] = container[begin];
    else {
      int64_t mid = begin + (end - begin) / 2;

      build(container, 2 * node, begin, mid, MOD);
      build(container, 2 * node + 1, mid + 1, end, MOD);

      tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MOD;  // Change addition to multiplication
    }
  }

  int64_t query(int64_t node, int64_t begin, int64_t end, int64_t low, int64_t high, const int64_t MOD) {
    if (lazy[node] != 1) {
      tree[node] *= lazy[node];

      if (begin != end) {
        lazy[2 * node] = (lazy[2 * node] * lazy[node]) % MOD;
        lazy[2 * node + 1] = (lazy[2 * node + 1] * lazy[node]) % MOD;
      }

      lazy[node] = 1;
    }

    if (end < low || begin > high)
      return 1;  // Return multiplication identity for out-of-range queries

    if (low <= begin && end <= high)
      return tree[node];

    int64_t mid = begin + (end - begin) / 2;

    return (query(2 * node, begin, mid, low, high, MOD) * query(2 * node + 1, mid + 1, end, low, high, MOD)) % MOD;
  }

  void update(int64_t node, int64_t begin, int64_t end, int64_t low, int64_t high, int64_t value, const int64_t MOD) {
    if (lazy[node] != 1) {
      tree[node] = (tree[node] * lazy[node]) % MOD;

      if (begin != end) {
        lazy[2 * node] = (lazy[2 * node] * lazy[node]) % MOD;
        lazy[2 * node + 1] = (lazy[2 * node + 1] * lazy[node]) % MOD;
      }

      lazy[node] = 1;
    }

    if (end < low || begin > high)
      return;

    if (begin >= low && end <= high) {
      tree[node] = value;

      if (begin != end) {
        lazy[2 * node] = value;
        lazy[2 * node + 1] = value;
      }
    } else {
      int64_t mid = begin + (end - begin) / 2;

      update(2 * node, begin, mid, low, high, value, MOD);
      update(2 * node + 1, mid + 1, end, low, high, value, MOD);

      tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MOD;  // Change addition to multiplication
    }
  }
};

void testcase() {
  int64_t n, m;
  cin >> n >> m;
  vector<int64_t> a(n);

  for (int64_t i = 0; i < n; i++)
    cin >> a[i];

  string s;
  cin >> s;

  Segment_tree tree(n);
  tree.build(a, 1, 0, n - 1, m);
  int64_t low = 0, high = n - 1;

  for (int i = 0; i < n; i++) {
    cout << tree.query(1, 0, n - 1, 0, n - 1, m) % m << ' ';

    if (s[i] == 'L') {
      tree.update(1, 0, n - 1, low, low, 1, m);
      low++;
    } else {
      tree.update(1, 0, n - 1, high, high, 1, m);
      high--;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tests = 1;
  cin >> tests;

  for (int i = 1; i <= tests; i++) {
    // cout << "Case #" << i << ": ";
    testcase(); cout << '\n';
  }

  return 0;
}
