#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{char ans1,ans2,now[101][2];int n,i;bool flag1=0,flag2=0;
 cin>>ans1>>ans2;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {scanf(" %c %c",&now[i][0],&now[i][1]);
   if((now[i][0]==ans1&&now[i][1]==ans2)||(now[i][0]==ans2&&now[i][1]==ans1))
    {cout<<"YES";return 0;}
   if(now[i][1]==ans1) flag1=1;
   if(now[i][0]==ans2) flag2=1;
  }
  if(flag1==1&&flag2==1)
   cout<<"YES";
  else 
   cout<<"NO";
   return 0;
 } 