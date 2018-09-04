#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, i, j, k, x, y, z;
ll l, r, mid, ans;

bool check( ll k ) {
	ll res = n;
	ll eat = 0;
	while ( res > 0 ) {
		eat += min( k, res );
		res -= min( k, res );
		if ( res >= 10 ) res -= res / 10;
	}
	return 2 * eat >= n;
}

int main()
{
	cin >> n;
	l = 1, r = n;ans = n;
	while ( l <= r ) {
		mid = ( l + r ) >> 1;
		if ( check( mid ) ) ans = mid, r = mid - 1;
		else l = mid + 1;
	}
	cout << ans;
	return 0;
}