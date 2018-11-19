#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main(){
 // freopen("input", "r", stdin);
  string s;
  cin>>s;
  int n;
  cin>>n;
  int f=0,fo=0,ba=0;
  for(int i=0;i<n;i++)
    {
      string t;
      cin>>t;
      if(t==s||(t[0]==s[1]&&t[1]==s[0]))f=1;
      if(t[0]==s[1]&&ba==1){f=1;}
      else if(t[1]==s[0]&&fo==1){f=1;}
      else if(t[0]==s[1])fo=1;
      else if(t[1]==s[0])ba=1;
    }
  if(f==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}
