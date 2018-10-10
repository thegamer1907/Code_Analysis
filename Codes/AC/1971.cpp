#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int boss=2e5;
ll n,k,a[boss+10],ans;
map<ll,ll> mp1,mp2;
int main()
{
int i;
scanf("%lld%lld",&n,&k);
for (i=1;i<=n;i++) 
  {
  scanf("%lld",&a[i]);
  if (i>1) ++mp2[a[i]];
  }
for (mp1[a[1]]=1,i=2;i<n;i++)
  {
  --mp2[a[i]];
  if (a[i]%k==0) ans+=mp1[a[i]/k]*mp2[a[i]*k];
  ++mp1[a[i]];
  }
printf("%lld",ans);
}