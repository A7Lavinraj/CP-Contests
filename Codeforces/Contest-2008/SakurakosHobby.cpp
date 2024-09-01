#include <bits/stdc++.h>
using namespace std;

struct DSU {
private:
  int _n;
  std::vector<int> parent, size;

public:
  DSU() : _n(0) {}
  DSU(int n) : _n(n) {
    parent.resize(_n, -1);
    size.resize(_n, -1);
  }

  void add(int x) {
    parent[x] = x;
    size[x] = 1;
  }

  int leader(int x) {
    assert(0 <= x && x < _n);

    if (parent[x] == x || parent[x] == -1)
      return x;

    return parent[x] = leader(parent[x]);
  }

  int merge(int a, int b) {
    assert(0 <= a && a < _n);
    assert(0 <= b && b < _n);
    int x = leader(a), y = leader(b);

    if (x == y)
      return x;

    if (parent[x] < parent[y])
      std::swap(x, y);

    size[x] += size[y];
    parent[y] = x;

    return x;
  }

  bool same(int a, int b) {
    assert(0 <= a && a < _n);
    assert(0 <= b && b < _n);
    return leader(a) == leader(b);
  }
};

void testcase() {
  int N;
  cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
    cin >> A[i];

  string S;
  cin >> S;
  map<int, int> mp;
  DSU dsu(N);

  for (int i = 0; i < N; i++) {
    dsu.add(i);
    mp[i] = int(S[i] == '0');
  }

  for (int i = 0; i < N; i++)
    if (!dsu.same(i, A[i] - 1))
      mp[dsu.merge(i, A[i] - 1)] = mp[dsu.leader(i)] + mp[dsu.leader(A[i] - 1)];

  for (int i = 0; i < N; i++)
    cout << mp[dsu.leader(i)] << " \n"[i == N - 1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases;
  cin >> testcases;
  for (int i = 1; i <= testcases; i++) {
    // cout << "Case #" << i << ": ";
    testcase();
  }
  return 0;
}
