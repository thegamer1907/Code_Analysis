#include<bits/stdc++.h>

#define fin() freopen("input.txt","r",stdin)
#define fout() freopen("out.txt","w",stdout)
#define ll long long int
#define f first
#define s second
#define pb push_back
#define PII pair<ll,ll>
#define mp(a,b) make_pair(a,b)
#define MOD 1000000007
#define N 1000005
#define LN 20
#define inf 1e18+5
using namespace std;

ll a[N];
vector<ll>v;
int main()
{
	ll n, k;
	scanf ("%lld%lld", &n, &k);
	for (ll i = 1; i <= n; i++) scanf ("%lld", a + i);
	for (ll i = 1; i <= k; i++)
	{
		ll d;
		scanf ("%lld", &d);
		v.pb (d);
	}
	sort (v.begin(), v.end());
	//	reverse(v.begin(),v.end());
	for (ll i = 1; i <= n; i++)
	{
		if (a[i] == 0)
		{
			a[i] = v.back();
			v.pop_back();
		}
	}
	ll foo=1;
	for(ll i=2;i<=n;i++)
	{
		if(a[i]<a[i-1])foo=0;
	}
	if(!foo)
		printf("Yes\n");
	else printf("No\n");
	return 0;
}

