#include <bits/stdc++.h>
using namespace std;
int r,n,k,i,a1,a[101];
int main()
{
  cin>>n>>k;
  for (i=1; i<=n; i++)
  {
    cin>>a1;
    a[a1]++;
  }
  r=0;
  for (i=100; i>=1; i--)
  {
    if (r+a[i]>=k)
    {
      cout<<r+a[i];
      return 0;
    }
    r+=a[i];
  }
  cout<<r;
  return 0;
}
