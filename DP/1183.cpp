#include<iostream>
#include<algorithm>
#include"bits/stdc++.h"

using namespace std;

int max(int a,int b)
{
  if(a>b)
    return a;
  else
      return b;
}
using namespace std;

int main(void)
{
  int *a,*b,n,i,n0=0,n1=0,mx=0,lz;
  cin>>n;
  a=new int[n+2];
  b=new int[n+2];
  for(i=1;i<n+1;i++)
    cin>>a[i];
  b[n+1]=0;
  lz=n+1;
  b[n+1]=0;
  a[n+1]=0;
  i=n;
  while(a[i]!=0&&i!=0)
  {
    mx++;
    b[i]=mx;
    i--;
  }
  if(i==0)
  {
      cout<<n-1;
      return 0;
  }
  for(i=n;i>0;i--)
  {
    if(a[i]==0)
    {
      if(a[i+1]==1)
      {
        b[i]=max(1+b[lz],n1+1);
        n0++;
      }
      else
      {
        b[i]=max(1+n0+b[lz],1+b[i+1]);
        n0++;
      }
    }
    if(a[i]==1)
    {
      if(a[i+1]==0)
        lz=i+1;
      b[i]=1+mx;
      n1++;
      n0=0;
    }
    if(b[i]>mx)
      mx=b[i];
  }
  cout<<mx;
  return 0;
}
