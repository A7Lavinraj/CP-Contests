#include <bits/stdc++.h>
using namespace std;

template <long long MOD> class MINT {
private:
  long long value;

public:
  MINT() : value(0) {}

  MINT(long long v) {
    value = v % MOD;
    if (value < 0)
      value += MOD;
  }

  MINT pow(long long exponent) const {
    MINT result = 1, base = *this;
    while (exponent > 0) {
      if (exponent & 1)
        result *= base;
      base *= base;
      exponent >>= 1;
    }
    return result;
  }

  MINT inv() const { return pow(MOD - 2); }

  operator long long() const { return value; }

  MINT &operator+=(const MINT &other) {
    value += other.value;
    if (value >= MOD)
      value -= MOD;
    return *this;
  }

  MINT &operator-=(const MINT &other) {
    value -= other.value;
    if (value < 0)
      value += MOD;
    return *this;
  }

  MINT &operator*=(const MINT &other) {
    value = (value * other.value) % MOD;
    return *this;
  }

  MINT &operator/=(const MINT &other) {
    *this *= other.inv();
    return *this;
  }

  friend MINT operator+(MINT a, const long long &b) {
    return MINT((a.value + (b % MOD) + MOD) % MOD);
  }

  friend MINT operator-(MINT a, const long long &b) {
    return MINT((a.value - (b % MOD) + MOD) % MOD);
  }

  friend MINT operator*(MINT a, const long long &b) {
    return MINT((a.value * (b % MOD)) % MOD);
  }

  friend MINT operator/(MINT a, const long long &b) {
    return MINT((a.value * MINT(b).inv().value) % MOD);
  }

  friend MINT operator+(MINT a, const MINT &b) {
    return MINT((a.value + b.value) % MOD);
  }

  friend MINT operator-(MINT a, const MINT &b) {
    return MINT((a.value - b.value + MOD) % MOD);
  }

  friend MINT operator*(MINT a, const MINT &b) {
    return MINT((a.value * b.value) % MOD);
  }

  friend MINT operator/(MINT a, const MINT &b) {
    return MINT((a.value * b.inv().value) % MOD);
  }

  friend std::ostream &operator<<(std::ostream &os, const MINT &mi) {
    return os << mi.value;
  }

  friend std::istream &operator>>(std::istream &is, MINT &mi) {
    long long x;
    is >> x;
    mi = MINT(x);
    return is;
  }
};

const long long MOD = 1e9 + 7;
using mint = MINT<MOD>;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  mint t;
  cin >> t;
  vector<array<mint, 2>> a(t);
  mint max_n = INT_MIN, max_k = INT_MIN;

  for (mint i = 0; i < t; i += 1)
    cin >> a[i][0];

  for (mint i = 0; i < t; i += 1)
    cin >> a[i][1];

  vector<vector<mint>> C(max_n, vector<mint>(max_n));

  for (mint i = 0; i < max_n; i += 1) {
    C[i][0] = 1;
    C[i][i] = 1;

    for (mint j = 1; j < i; j += 1)
      C[i][j] = C[i][j - mint(1)] + C[i - mint(1)][j - mint(1)];
  }

  for (mint i = 0; i < t; i += 1)
    cout << C[a[i][0]][a[i][1]] << '\n';

  return 0;
}
