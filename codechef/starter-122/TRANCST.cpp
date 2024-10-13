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
  string bin;

  auto check = [](string str, string sq) -> bool {
    int index = 0;

    for (int i = 0; i < (int)str.size(); i++) {
      if (str[i] == sq[index])
        index++;
      if (index == (int)sq.size())
        return true;
    }

    return false;
  };

  for (int i = 0; i < 30; i++)
    bin.push_back(char((n >> i & 1) + int('0')));

  if (!check(bin, "101")) {
    cout << 0;
    return;
  }

  int64_t cost = 0;
  int low = int(find(bin.begin(), bin.end(), '1') - bin.begin());
  int high = 0;

  for (int i = (int)bin.size() - 1; i >= 0; i--)
    if (bin[i] == '1') {
      high = i;
      break;
    }

  int prev = low;
  bool flag = true;

  for (int i = low + 1; i <= high; i++) {
    if (bin[i] == '0') {
      if (i + 1 != (int)bin.size() && bin[i + 1] != '1')
        cost += int64_t(1 << i);

      flag = false;
    } else {
      if (!flag) {
        cost += int64_t(1 << prev);
        prev = i - 1;
        flag = true;
      }
    }
  }

  cout << cost;
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
