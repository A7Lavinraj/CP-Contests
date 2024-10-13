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

void testcase() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  queue<int> que;
  int curr = a[0];

  for (int i = 1; i < n; i++) {
    if (!que.empty()) {
      curr = (curr / que.front() + 1) * que.front();
      que.pop();
      que.push(a[i]);
    } else {
      if (curr > a[i]) {
        que.push(a[i]);
      } else {
        curr = (curr / a[i] + 1) * a[i];
      }
    }
  }

  while(!que.empty()) {
    curr = (curr / que.front() + 1) * que.front();
    que.pop();
  }

  cout << curr;
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
