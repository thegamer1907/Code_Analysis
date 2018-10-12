#include <bits/stdc++.h>
#define ll long long
#define DEBUG_
#define fin(s) freopen( s, "r", stdin );
#define fout(s) freopen( s, "w", stdout );

using namespace std;

const ll N = 1e5 + 5;

ll n, m, a[N], s[N], ans;

int main()
{

	cin >> n >> m;
	for ( int i = 1; i <= n; i ++ ){
		cin >> a[i];
		s[i] = s[i-1] + a[i];
	}
	for ( int i = 1; i <= n; i ++ ){
		ll x = i, y = n;
		ll f;
		ll l = i, r = n, mid;
		while ( l < r )
		{
			mid = ( l + r ) / 2;
			f = s[mid] - s[x] + a[x];
			if ( f < m ) l = mid + 1;
			else r = mid;
		}
		if ( s[l] - s[x] + a[x] > m ) l --;
		ans = max(ans, l-x+1);
	}
	cout << ans;
}
