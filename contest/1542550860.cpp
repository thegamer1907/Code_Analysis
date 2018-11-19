#include <bits/stdc++.h>

using namespace std;

int main() {
  string pass; cin>>pass;
  int n; cin>>n;
  vector<int> start(26,0);
  vector<int> end(26,0);
  for(int i = 0;i < n;i++) {
    string t; cin>>t;
    if(t == pass) {
      cout << "YES" << endl;
      return 0;
    }
    start[t[0] - 'a'] = 1;
    end[t[1] - 'a'] = 1;
  }
  if(end[pass[0] - 'a'] && start[pass[1] - 'a']) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
