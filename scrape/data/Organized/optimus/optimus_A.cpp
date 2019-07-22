#include <bits/stdc++.h>

#define  ll        long long
#define  mx        100005
#define  read      freopen("in.txt", "r", stdin)

using namespace std;

int main()
{
	// read;
	ll n, m, k, cn=0, ans=0, bb;
	ll a[mx];

	cin >> n >> m >> k;

	for(int i = 0; i < m; i++) cin >> a[i];

	// aa = 1;
	bb = k;

	while(1)
	{
		if(cn==m) break;

		ll lb = 0;
		ll ub = upper_bound(a, a+m, bb)-a;

		ll x = (ub-lb)-cn;

		// cout << x << " " << bb << " " << cn << endl;

		if(x==0)
		{
			ll ml = ceil((double)(a[cn]-bb)/(double)k);
			bb += (ml*k);
		}
		else
		{
			ans++;
			cn += x;
			bb += x;
		}

		// cnt++;

	}

	cout << ans << endl;

	return 0;
}