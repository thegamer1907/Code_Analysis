#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int pd(ll x)
{
	ll k=n,ans=0;
	while (k)
	 {
	 	ll i=min(k,x);
	 	k-=i;
	 	ans+=i;
	 	ans-=k/10;
	 	k-=k/10;
	 }
	return ans>=0; 
}
int main()
{
	scanf("%lld",&n);
	ll l=1,r=n;
	while (l<r)
	 {
	 	ll mid=(l+r)/2;
	 	if (pd(mid))r=mid;
	 	else l=mid+1;
	 }
	printf("%lld",l); 
}
