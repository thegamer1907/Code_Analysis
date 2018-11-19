#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  #ifdef Zonda_R
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
  #endif
  int n, k;
  cin >> n >> k;
  set<string> s;
  for(int i = 0; i < n; ++i) {
    string str = "";
    for(int j = 0; j < k; ++j) {
      char a;
      cin >> a;
      str += a;
    }  
    s.insert(str);
  }  
  bool check = false;
  for(auto &x : s) {
    if(check) break;
    for(auto &y : s) {
      bool valid = true;
      for(int i = 0; i < k; ++i) {
        if(x[i] == y[i] && x[i] == '1') valid = false;
      }
      if(valid) {
        check = true;
        break;
      }
    }
  }
  cout << (check ? "YES" : "NO") << endl;
  return 0;
}