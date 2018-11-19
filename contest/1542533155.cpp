#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int f[101],n,k,flag;
int main()
{int i,j,x;
  cin>>n>>k;
  for (i=1;i<=n;i++)
    {
      int cnt=0;
      for (j=1;j<=k;j++)
    {
      scanf("%d",&x);
      cnt+=(1<<j-1)*x;
    }
      f[cnt]=1;
    }
  flag=0;
  for (i=0;i<16;i++)
    for (j=0;j<16;j++)
      if ((i&j)==0&&f[i]&&f[j]) 
    {
      flag=1;
    }
  if (flag) cout<<"YES\n";
  else cout<<"NO\n";
}