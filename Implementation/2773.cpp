#include<bits/stdc++.h>

#define fin() freopen("input.txt","r",stdin)
#define fout() freopen("out.txt","w",stdout)
#define ss(dp,n) memset (dp, n, sizeof (dp))
#define sss(n) scanf("%lld",&n)
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

ll a[N];
int main()
{
	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	ll n;
	cin >> n;
	ll sum = 0;
	for (ll i = 1; i <= n; i++) cin >> a[i], sum += a[i];
	printf ("%lld\n", *max_element (a + 1, a + n + 1) *n - sum);
	return 0;
}
