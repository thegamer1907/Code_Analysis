#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

const lli inf = 1e18;
const int infInt=1e9;
const lli mod =1000000007;

string s[110],s1;
int n;
int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  cin>>s1;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>s[i];
  }
  bool yes=false;
  for(int i=1;i<=n;i++){
    if(s1==s[i]){
      yes=true;
      break;
    }
    for(int j=1;j<=n;j++){
      string t=s[i]+s[j];
      if(t.substr(1,2)==s1)
        yes=true;
    }
  }
  if(yes)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}