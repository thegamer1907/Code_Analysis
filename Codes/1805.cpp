#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
ll n,m,k;
ll get(ll x)
{
	ll an=0;
	for(ll i=1;i<=n;i++)
		an=an+min(x/i,m);
	return an;
}
ll binsearch()
{
	ll l=1,r=n*m+1;
	ll mid=(l+r)>>1;
	while(r-l>1)
	{
		if(get(mid)>=k)
			r=mid;
		else
			l=mid;
		mid=(l+r)>>1;
	}
	while(get(mid)<k)mid++;
	return mid;
}
int main() {
SPEED;
cin>>n>>m>>k;
//k=n*m-k;
cout<<binsearch()<<endl;

	return 0;
           } 