#include <bits/stdc++.h>
#ifdef DEBUG
#include "/home/lavinraj/career/code-library/debug.cpp"
#else
#define dbg(x...) 32
#endif
#define len(x) int((x).size())

using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

const int N = 1e5 + 7;
int dp[N];

int find_max(vector<int>& arr, int index, vector<array<int, 2>>& segments) {
  if (dp[index] != -1) 
    return dp[index];

  if (index == len(segments)) {
    int sum = 0, mn = INT_MAX, mx = INT_MIN;

    for (int i = 0; i < len(arr) - 1; i++) {
      sum += arr[i];
      mn = min(mn, sum);
      mx = max(mx, sum);
    }

    return mx - mn;
  }

  int cost = INT_MIN;

  cost = max(find_max(arr, index + 1, segments), cost);

  arr[segments[index][0]]++;
  arr[segments[index][1] + 1]--;


  cost = max(find_max(arr, index + 1, segments), cost);

  arr[segments[index][0]]--;
  arr[segments[index][1] + 1]++;

  return cost;
}

void solve() {
  int N, M;
  cin >> N >> M;
  vector<array<int, 2>> segments(N);

  memset(dp, -1, sizeof(dp));

  for (int i = 0; i < N; i++)
    cin >> segments[i][0] >> segments[i][1], segments[i][0]--, segments[i][1]--;

  vector<int> arr(M + 1, 0);

  print(find_max(arr, 0, segments));
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
