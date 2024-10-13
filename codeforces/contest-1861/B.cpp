#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  string A, B;
  cin >> A >> B;

  int N = sz(A);
  if (A.front() != B.front() && A.back() != B.back()) {
    print("NO");
    return;
  }

  if (A.front() == A.back() && B.front() == B.back() && A.front() == B.front()) {
    print("YES");
    return;
  }

  bool ok = false;
  for (int i = 0; i < N - 1; i++) {
    if (A[i] == A.front() && B[i] == A.front() && A[i + 1] == B[i + 1] && A[i + 1] == A.back()) {
      ok = true;
    }
  }

  print(ok ? "YES" : "NO");
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
