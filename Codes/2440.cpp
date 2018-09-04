#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair <ll , ll> pll;
#define pb push_back
#define X first
#define Y second
#define mkp make_pair
#define pow2(i) (1LL << (i))
#define modi(a,b) ((a%b+b)%b)
#define smax(a,b) a=max(a,b)
#define smin(a,b) a=min(a,b)
const ll maxn=1e7+5,M=20,bghs=1e9+7,inf=1e18;
ll n,m;
ll c[maxn],f[maxn];
bool prime[maxn];
int main()
{
	scanf("%lld",&n);
	for(ll i=0;i<n;i++)
	{ll x;scanf("%lld",&x);c[x]++;}
	for(ll i=2;i<maxn;i++)
	{
		if(!prime[i]) for(ll j=i;j<maxn;j+=i)
		{
			prime[j]=true;
			f[i]+=c[j];
		}
	}
	for(ll i=2;i<maxn;i++) f[i]=f[i-1]+f[i];
	scanf("%lld",&m);
	while (m--)
	{
		ll l,r;scanf("%lld%lld",&l,&r);
		if (l>=maxn) l=maxn-1; l--;
		if (r>=maxn) r=maxn-1;
		printf("%lld\n",f[r]-f[l]);
	}
}
