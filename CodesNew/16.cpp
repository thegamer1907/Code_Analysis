#include <bits/stdc++.h>
#define ll long long
#define DEBUG
#define fin(s) freopen( s, "r", stdin );
#define fout(s) freopen( s, "w", stdout );

using namespace std;

const ll N = 1e3 + 5;

ll n, m, a[N];

int main()
{
	double ans = 0;
	cin >> n >> m;
	a[0] = 0, a[n+1] = m;
	for ( int i = 1; i <= n; i ++ ){
		cin >> a[i];
	}
	ll l = 1;
	sort ( a + 1, a + 1 + n );
	if ( a[1] != 0 ) ans = a[1], l = 2;
	for ( int i = l; i <= n; i ++ ){
		double c = ( a[i] - a[i-1] );
		c = c / 2;
		ans = max( ans, c );
	}
	ans = max ( ans, double(a[n+1]-a[n]) );
	double x = ans;
	cout << fixed << setprecision(10) << x;
}
