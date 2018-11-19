#include <bits/stdc++.h>

using namespace std;
int check(int x,int y,int k)
{
  while(k--)
  {
   if((x%2)+(y%2)==2)
   {
    return 0;
   }
   x=x/2;
   y=y/2;
  }
  return 1;
}
int main()
{
    int n,i,j,k,sum=0,x,y,z;
    cin>>n>>k;
    int a[n];
    y=pow(2,k)-1;
    int b[y+1];
    for(i=0;i<n;i++)
    {
      a[i]=0;
      for(j=0;j<k;j++)
      {
        cin>>x;
        a[i]+=(x*pow(2,k-j-1));
      }
    }
    for(i=0;i<=y;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
    if(a[i]==0)
    {
     cout<<"YES";
     return 0;
    }
    b[a[i]]++;
    }
    for(i=0;i<=y;i++)
      for(j=0;j<=y&&j!=i;j++)
    {
     if(b[i]>0&&b[j]>0)
     {
      if(check(i,j,k)==1)
      {
        cout<<"YES";
        return 0;
      }
     }
    }
    cout<<"NO";
    return 0;
}
