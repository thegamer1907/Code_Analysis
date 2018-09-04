#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define mk make_pair
#define pb push_back
#define eps 1e-12
#define sd(x) scanf("%d",&x)
#define sdl(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define pdl(x) printf("%lld\n",x)
#define MAXN 200009
using namespace std;
ll n,m,k;
inline bool check(ll mid)
{
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		ll val=(mid/i);
		val=min(val,m);
		ans+=val;
	}
	if(ans<k)
	{
		return true;
	}
	return false;
}
int main()
{
	sdl(n);
	sdl(m);
	sdl(k);
	ll low=1,high=n*m;
	while(low<high)
	{
		ll mid=low+((high-low)/2ll);
		if(check(mid))
		{
			low=mid+1;
		}
		else
		{
			high=mid;
		}
	}
	pdl(low);
	return 0;
}