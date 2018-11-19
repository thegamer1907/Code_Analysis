#include <iostream>
using namespace std;
int n;
string s;
string ss[202];

int main(){
  cin >> s;
  cin >> n;
  for (int i=0; i<n; ++i) cin >> ss[i];
  bool t=0;
  for (int i=0; i<n; ++i){
    if (ss[i]==s) t=1;
    for (int j=0; j<n; ++j){
      if (ss[i][1]==s[0] && ss[j][0]==s[1]) t=1;
    }
  }
  cout << (t?"YES\n":"NO\n");
}