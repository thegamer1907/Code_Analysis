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

ll n, m, a[N];
vector<ll>v;
int main()
{
	ll h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	m = m / 5;
	s = s / 5;
	if (h == 12) h = 0;
	v.pb (h);
	v.pb (m);
	v.pb (s);
	sort (v.begin(), v.end());
	if (t1 > t2) swap (t1, t2);
	if (t1 > v[0] && t2 > v[0] && t1 <= v[1] && t2 <= v[1])
	{
		printf ("YES\n");
		return 0;
	}
	if (t1 > v[1] && t2 > v[1] && t1 <= v[2] && t2 <= v[2])
	{
		printf ("YES\n");
		return 0;
	}
	if (t1 <= v[0]) t1 += 12;
	if (t2 <= v[0]) t2 += 12;
	if (t1 > v[2] && t2 > v[2] && t1 <= 12 + v[0] && t2 <= 12 + v[0])
	{
		printf ("YES\n");
		return 0;
	}
	printf ("NO\n");
	return 0;
}

