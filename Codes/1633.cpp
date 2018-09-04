//seed points in integer plane(euclidean distance) to integer points
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define slld(x) scanf("%lld",&(x))
#define sd(x) scanf("%lld",&(x))
#define fi first
#define se second
#define mx 10000001
#define md 1000000007
#define pii pair<int,int> 
#define pll pair<ll,ll> 
#define vii vector<int>
#define vll vector<ll> 
#define pd(x) printf("%lld ",(x))
#define plld(x) printf("%lld ",(x))
#define mp(a,b) make_pair(a,b)
#define pb(x) emplace_back(x)
#define fr(i,a,b) for(int i=a;i<b;i++)
#define br printf("\n")
#define spd ios::sync_with_stdio(false); cin.tie(0)
#define ld long double 

bool f(int a[],int n,int mid,int s)
{
	int b[n+1];
	for(int i=1;i<=n;i++)
	{
		b[i] = a[i] + i*mid;
	}
	sort(b+1,b+n+1);
	int sum = 0;
	for(int i=1;i<=mid;i++)
		sum+=b[i];
	if(sum<=s)
		return 1;
	return 0;
}
int b_search(int a[],int n,int s)
{
	if(f(a,n,n,s))
		return n;
	int l = 0,r=n;
	while(r-l>1)
	{
		int mid = (l+r)>>1;
		if(f(a,n,mid,s))
			l = mid;
		else
			r = mid;
	}
	return l;
}
main()
{
	//freopen("inputf.txt","r",stdin);
	int n,s;
	sd(n);
	sd(s);
	int a[n+1];
	for(int i=1;i<=n;i++)
		sd(a[i]);
	int k = b_search(a,n,s);
	pd(k);
	fr(i,1,n+1)
	a[i]+=k*i;
	sort(a+1,a+n+1);
	int sum = 0;
	for(int i=1;i<=k;i++)
		sum+=a[i];
	pd(sum);
	return 0;
}