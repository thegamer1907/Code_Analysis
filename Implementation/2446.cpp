#include<bits/stdc++.h>

#define fin() freopen("input.txt","r",stdin)
#define fout() freopen("out.txt","w",stdout)
#define ss(dp,n) memset (dp, n, sizeof (dp))
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
#define fast_io  ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	ll n, k;
	cin >> n >> k;
	ll tot = 0;
	for (ll i = 1; i <= n; i++)
	{
		if (tot + i * 5 + k > 240)
		{
			printf ("%lld\n", i - 1);
			return 0;
		}
		tot += 5 * i;
	}
	printf("%lld\n",n);
	return 0;
}
