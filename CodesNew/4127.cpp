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
ll n,q,a[200005],k[200005];
ll binsearch(ll x)
{
	ll l=1,r=n;
	if(a[n]<=x)return n;
	if(a[1]>x)return 0;
	ll mid=(l+r)>>1;
	while(r-l>1)
	{
		if(a[mid]>x)
			r=mid;
		else
			l=mid;
		mid=(l+r)>>1;
	}
	while(a[mid+1]<=x)mid++;
	return mid;
}
int main() {
SPEED;
cin>>n>>q;
for(int i=1;i<=n;i++)
	cin>>a[i];
for(int i=1;i<=q;i++)
	cin>>k[i];
for(int i=1;i<=n;i++)
	a[i]+=a[i-1];
ll sum=0;
for(int i=1;i<=q;i++)
{
	sum+=k[i];
	ll x=binsearch(sum);
	if(x==n)
	{
		sum=0;
		x=0;
	}
	x=n-x;
	cout<<x<<endl;
}

	return 0;
           } 