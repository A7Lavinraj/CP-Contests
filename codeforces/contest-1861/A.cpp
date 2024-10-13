#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

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

void solve(){
  string s;
  cin >> s;

  sieve sv(99);
  vector<bool> v = sv.get_bool_array();

  auto convert = [](char a, char b) -> int {
    return (a - '0') * 10 + (b - '0');
  };

  for (int i = 0; i < sz(s); i++) {
    for (int j = i + 1; j < sz(s); j++) {
      if (v[convert(s[i], s[j])]) {
        print(convert(s[i], s[j]));
        return;
      }
    }
  }

  print(-1);
}

int main() { 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
