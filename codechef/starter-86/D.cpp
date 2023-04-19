#include <bits/stdc++.h>
using namespace std;

void print(){cout << "\n";}template<typename T, typename...types> void print(const T& first, const types&...args) {cout << first << " "; print(args...);}

void solve(){
  int n;
  string s;
  cin >> n >> s;
  stack<char> st;

  int cnt = 0;
  for (char i : s) {
    if (st.empty()) {
      st.push(i);
    }
    else {
      if (st.top() != i) {
        st.pop();
        cnt++;
      }
      else {
        st.push(i);
      }
    }
  }

  print(cnt & 1 ? "Zlatan" : "Ramos");
}

int main() { 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
 	for (int i = 1; i <= t; i++) {
		//cout << "Case #" << i << ": ";
        solve();
	}
	return 0;
}
