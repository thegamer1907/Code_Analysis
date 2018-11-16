#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
# define ll long long 
using namespace std;

int main() {

 
ll n,m;
scanf("%lld",&n);
ll a[n];
for(int i=0;i<n;i++)
scanf("%lld",&a[i]);
scanf("%lld",&m);
ll b[m];
for(int i=0;i<m;i++)
scanf("%lld",&b[i]);
sort(a,a+n);
sort(b,b+m);
ll i=0,j=0,count=0;
while(i<n && j<m)
{
  if(a[i]==b[j])
  {
    count++;
    i++;
    j++;
  }
  else if(a[i]==b[j]-1 || a[i]==b[j]+1)
    {count++;
      i++;
      j++;
    }
  else if(a[i]>b[j])
    j++;
  else i++;
}
printf("%lld\n",count);

return 0;
}