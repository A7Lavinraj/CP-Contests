#include <bits/stdc++.h>
using namespace std;

void testcase() {
  int n;
  cin >> n;
  set<pair<int, int>> edges;
  stack<pair<int, int>> st;
  vector<bool> connected(n + 1, false);

  for (int i = n; i > 1; i--) {
    if (!connected[i])
      st.push(make_pair(1, i));

    while (!st.empty()) {
      pair<int, int> p = st.top();
      st.pop();
      int node;
      cout << "? " << p.first << " " << p.second << endl;
      cin >> node;

      if (node == -1)
        goto done;

      if (node == p.first) {
        edges.insert(make_pair(p.first, p.second));
        connected[p.first] = true;
        connected[p.second] = true;
      } else {
        if (!(connected[p.first] && connected[node]))
          st.push(make_pair(p.first, node));
        if (!(connected[node] && connected[p.second]))
          st.push(make_pair(node, p.second));
      }
    }
  }

done:
  cout << "! ";

  for (auto e : edges)
    cout << e.first << " " << e.second << " ";

  cout << endl;
}

int main() {
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
