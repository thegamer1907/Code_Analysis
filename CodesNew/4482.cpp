#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int n;
  cin>>n;
  long long int a[n],i,j,count=0;
  for(i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  }
  sort(a,a+n);
  for(i=0,j=n/2;i<n/2,j<n;j++)
  {
    if(a[j]>=2*a[i])
    {
      count++;
      i++;
    }
  }
  printf("%lld",n-min(n/2,count));
}