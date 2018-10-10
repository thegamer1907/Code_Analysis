#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef pair<int,int> pii;
#define pb push_back
#define mkp make_pair
#define F first
#define S second
const int maxn=1e5+5;

int n,S;
ll a[maxn];
pair<ll,ll> b[maxn];
ll l,r,ans;
ll cost;

int main()
{
	scanf("%d%d",&n,&S);l=1,r=n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=mkp(a[i],i);
	}
	while(ans!=(l+r)/2)
	{
		for(int i=1;i<=n;i++)
		{
			b[i].F+=((l+r)/2-ans)*b[i].S;
		}
		ans=(l+r)/2;
		sort(b+1,b+n+1);
		ll costnow=0;
		for(int i=1;i<=ans;i++)
		{
			costnow=costnow+b[i].F;
		}
		if(costnow<=S){ l=ans+1;cost=costnow; }
		else r=ans-1;
	}
	printf("%lld %lld\n",ans,cost);
	return 0;
}
