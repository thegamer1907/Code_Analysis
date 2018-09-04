#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 100000

ll n, S, T, p[maxn], a[maxn];
bool ok(ll m)
{
	for(ll i = 0; i < n; i++)
		a[i] = p[i] + m * (i + 1);
	sort(a, a + n);
	ll sum = 0;
	for(ll i = 0; i < m; i++)
		sum += a[i];
	if(sum <= S)
	{
		T = sum;
		return true;
	}
	return false;
}

int main()
{
	ll l, r, m, k, i;
	scanf("%lld %lld", &n, &S);
	for(i = 0; i < n; i++)
		scanf("%lld", p + i);
	l = 0;
	r = n;
	while(l <= r)
	{
		m = (l + r) >> 1;
		if(ok(m))
		{
			k = m;
			l = m + 1;
		}
		else
			r = m - 1;
	}
	printf("%lld %lld", k, T);
	return 0;
}