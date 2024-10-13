#include <bits/stdc++.h>
using namespace std;

struct sieve {
  vector<bool> prime;
  sieve(size_t N = 100) {
    prime.assign(N + 1, true);

    prime[0] = prime[1] = false;
    for (int i = 2; i <= N; i++) {
      for (int j = 2; i * j <= N; j++) {
        prime[i * j] = false;
      }
    }
  }

  vector<int> primes() {
    vector<int> result;
    for (int i = 2; i <= int(prime.size()); i++) {
      if (prime[i]) result.push_back(i);
    }

    return result;
  }

  bool isprime(int n) {
    return prime[n];
  }

} primes(1e6 + 7);

vector<int> _primes = primes.primes();

void testcase() { 
  int n;
  cin >> n;


  if (n & 1) {
    n--;
    cout << 1 << ' ';

    for (int i = 0; i < n / 2; i++) {
      cout << _primes[i] << ' ' << _primes[i] << ' ';
    }
  } else {
    for (int i = 0; i < n / 2; i++) {
      cout << _primes[i] << ' ' << _primes[i] << ' ';
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
