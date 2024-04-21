#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<int> perm(N);
  map<int, int> mp;

  for (int i = 0; i < N; i++)
    cin >> perm[i], mp[perm[i]] = i + 1;

  vector<pair<int, int>> ans;

again:
  for (int i = 0; i < N; i++)
    if (mp[perm[i]] != perm[i]) {
      int left = min(perm[i], mp[perm[i]]);
      int right = max(perm[i], mp[perm[i]]);
      ans.push_back({left, right});
      mp[perm[left - 1]] = right;
      mp[perm[right - 1]] = left;
      swap(perm[left - 1], perm[right - 1]);
    }

  bool status = true;

  for (auto it : mp)
    if (it.first != it.second) {
      status = false;
      break;
    }

  if (!status)
    goto again;

  cout << (int)ans.size() << '\n';

  for (auto itr : ans)
    cout << itr.first << " " << itr.second << '\n';

  return 0;
}
