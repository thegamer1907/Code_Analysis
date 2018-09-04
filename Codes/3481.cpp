#include<bits/stdc++.h>
#define ll long long
ll n;
bool check(ll x)
{
	ll now=n,s1=0,s2=0;
	while(now>0)
	{
		s1+=std::min(now,x);now-=std::min(now,x);now-=now/10;
	} 
	return s1*2>=n;
}
int main()
{
	std::cin>>n;
	ll l=1,r=n,ans=1;
	if(n<=2) return puts("1"),0;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		//printf("%I64d %I64d %I64d\n",l,r,mid);
		if(check(mid)) ans=mid,r=mid-1;
		else l=mid+1;
	}
	std::cout<<ans; 
}
