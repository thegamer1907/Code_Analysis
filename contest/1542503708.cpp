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
string s[N];
int main()
{
	string str;
	cin >> str;
	ll n;
	cin >> n;
	for (ll i = 1; i <= n; i++)
		cin >> s[i];
	ll f1 = 0;
	ll f2 = 0;
	for (ll i = 1; i <= n; i++)
	{
		if (str == s[i])
		{
			printf ("YES\n");
			return 0;
		}
		if (s[i][1] == str[0]) f1 = 1;
		if (s[i][0] == str[1]) f2 = 1;
	}
	if (f1 && f2) printf ("YES\n");
	else printf ("NO\n");
	return 0;
}
