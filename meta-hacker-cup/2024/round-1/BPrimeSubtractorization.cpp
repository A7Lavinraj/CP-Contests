#include <bits/stdc++.h>
using namespace std;

const int N = int(1e7 + 5);
std::vector<bool> is_prime;
std::vector<int> primes;
vector<int> valid(N + 1, 0);

void sieve() {
  is_prime.assign(N + 1, true);
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i <= N; i++) {
    for (int j = 2; i * j <= N; j++) {
      is_prime[i * j] = false;
    }
  }

  for (int i = 2; i <= N; i++)
    if (is_prime[i] == true)
      primes.push_back(i);
}

void testcase() {
  int n;
  cin >> n;
  int64_t cnt = 0;

  for (int64_t i = 2; i <= n - 2; i++) {
    if (is_prime[i] && is_prime[i - 2])
      cnt++;
  }

  cout << cnt + 2 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sieve();
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
