#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  int init_L = 0, init_R = 0;
  int fatigue = 0;
  
  for (int i = 0; i < N; i++) {
    int K;
    char C;
    cin >> K >> C;

    if (C == 'L') {
      if (init_L == 0)
        init_L = K;
      else
        fatigue += abs(init_L - K), init_L = K;
    } else {
      if (init_R == 0)
        init_R = K;
      else
        fatigue += abs(init_R - K), init_R = K;
    }
  }

  cout << fatigue << '\n';

  return 0;
}
