#include <bits/stdc++.h>
using namespace std;
int main() {
  string s,res;
  int n,t;
  cin >> n >> t;
  cin >> s;
  for (int i=0;i<t;i++){
    res = "";
    for (int j=0;j<n;j++){
      if ((s[j]=='B') && (s[j+1]=='G')){
        res = res + "GB";
        j++;
      }
      else{
        res = res + s[j];
      }
    }
    s = res;
  }
  cout << res;
}
