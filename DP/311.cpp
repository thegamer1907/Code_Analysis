#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[104];
int b[104];
int dp[104][104];
int n,m;

int fun(int i,int j)
{int x1=0,x2=0,x3=0;
    if (i==n || j==m)
    return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];
    if(abs(a[i]-b[j])<=1)
        x1=fun(i+1,j+1)+1;
         x2=fun(i,j+1);
         x3=fun(i+1,j);
         return dp[i][j]=max(x1,max(x3,x2));

}
int main()
{int cont=0;
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
cin>>m;
for(int i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    memset(dp,-1,sizeof dp);
   int x= fun(0,0);
   cout<<x;


   /* for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
      if(abs(a[i]-b[j])==1 || abs(a[i]-b[j])==0)
      {
        b[j]=200;
        cont++;
        break;
      }
    }
cout<<cont;*/

    return 0;
}
