#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N=1000051;
ll n;
ll a[N];
void init()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  ll ansl=0,ansr=0,l=1,r=n,ans=0;
  while(l<=r)
  {
    if(ansl<=ansr)
    {
      ansl+=a[l];
      l++;
    }
    else
    {
      ansr+=a[r];
      r--;
    }
    if(ansl==ansr)ans=ansl;
  }
  if(ansl==ansr)ans=ansl;
  printf("%lld\n",ans);
}
int main()
{
  int T;
  T=1;
  while(T--)
    init();
  return 0;
}
