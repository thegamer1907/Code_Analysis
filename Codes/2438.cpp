#include<bits/stdc++.h>

using namespace std;
typedef int ll;
const int M=1e7+5;
ll arr[M], sieve[M], pref[M];
ll n;
int main()
{
	scanf("%d", &n);
	for(ll a=1; a<=n; a++)
	{
		ll x;
		scanf("%d", &x);
		arr[x]++;
	}
	for(ll a=2; a<=10000000; a++)
	{
		if(sieve[a]==0)
			for(ll b=a; b<=10000000; b+=a)
			{
				sieve[b]=1;
				pref[a]+=arr[b];
			}
	}
	for(ll a=2; a<=10000000; a++)
		pref[a]+=pref[a-1];
	ll m;
	// for(ll a=1; a<=100; a++)
		// printf("%d %d\n", a, pref[a]);
	scanf("%d", &m);
	while(m--)
	{
		ll l, r;
		scanf("%d%d", &l, &r);
		l=min(l, 10000000);
		r=min(r, 10000000);
		printf("%d\n", pref[r]-pref[l-1]);
	}
	return 0;
}