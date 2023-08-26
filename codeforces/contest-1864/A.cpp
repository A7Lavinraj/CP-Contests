#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

template <typename T = int> void vector_out(vector<T> output) {
  for (T iterator : output) {
    cout << iterator << " ";
  }
  cout << "\n";
}

int sum(int n) {
  return (n * (n + 1)) / 2;
}

void solve(){
  int x, y, n;
  cin >> x >> y >> n;

  if (y - sum(n - 1) < x) {
    print(-1);
    return;
  }

  vector<int> answer;
  for (int i = 0; i < n - 1; i++) {
    answer.insert(answer.begin(), y - sum(i));
  }
  answer.insert(answer.begin(), x);

  vector_out(answer);
  print();
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
