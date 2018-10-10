#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll n, m, k, l = 0, r, c, f;
	cin >> n >> m >> k;
	r = n*m;
	
	while (l < r-1)
	{
		c = (l+r)/2;
		f = 0;
		
		for (ll i = 1; i <= n; i++)
			f += min(c, i*m)/i;
		
		if (f < k)
			l = c;
		else
			r = c;
	}
	
	cout << r;
}