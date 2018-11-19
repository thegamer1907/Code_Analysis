#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
  string pass;cin>>pass;
  int n;cin>>n;
  bool cando=false;
  bool a=false,b=false;
  for(int i=0;i<n;i++)
    {
      string s;cin>>s;
      if(s==pass)cando=true;
      if(s[0]==pass[1])a=true;
      if(s[1]==pass[0])b=true;
    }
  if(cando || (a&&b))
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
