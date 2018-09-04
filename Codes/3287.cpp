#include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(ll i=b;i>=a;i--)

using namespace std;
const ll mod=1e9+7;
const ll maxN=1e6+5;
const ll inf=1e18;

ll n;
ll a[maxN];

int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n;
	FOR(i,1,n) cin>>a[i];
	ll minn=inf;
	FOR(i,1,n) minn=min(a[i],minn);
	FOR(i,1,n) a[i]-=minn;
	ll i=1;
	minn%=n;
	i+=minn;
	ll dem=0;
	while (a[i]-dem>0)
	{
		dem++;
		i++;
		if (i>n) i=1;
	}
	cout<<i;
	return 0;
}
