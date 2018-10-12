/*
 *
  Author: mesc
  Created: 3/10/18 13:11 IST
 *
 *
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n,m;
  cin>>n>>m;
  int sum=0,a[n],k=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
    if(a[i]>k)
     {
        k=a[i];
     }
  }
 int ans1=k,ans2=k+m;
 m-=k*n-sum;
 if(m>0)
  {
     ans1+=(m+n-1)/n;
  }
 cout<<ans1<<" "<<ans2;
}