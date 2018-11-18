#include<bits/stdc++.h>

#define fin() freopen("input.txt","r",stdin)
#define fout() freopen("out.txt","w",stdout)
#define ss(dp,n) memset (dp,n, sizeof (dp))
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
#define fast_io  ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll n, m;

ll a[N];
int main()
{
	ll n, k;
	cin >> n >> k;
	for (ll i = 1; i <= n; i++)
	{
		ll num = 0;
		for (ll j = 0; j < k; j++)
		{
			ll d;
			cin >> d;
			if (d) num += (1 << j);
		}
		a[num]++;
	}
	for (ll i = 0; i < 50; i++)
		for (ll j = 0; j < 50; j++)
		{
			if ((i & j) == 0 && a[i] && a[j])
			{
				printf ("YES\n");
				return 0;
			}
		}
	printf ("NO\n");
	return 0;
}
