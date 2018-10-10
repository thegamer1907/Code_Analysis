#include <stdio.h>
#include <algorithm>

using namespace std;

typedef long long lld;

bool check(lld n, lld k)
{
	lld eat = 0;

	for(lld cn = n; cn > 0;)
	{
		eat += min(cn, k);
		cn -= min(cn, k);
		cn -= cn/10;
	}

	return 2*eat < n;
}

int main()
{
	lld n;
	scanf("%lld", &n);

	lld ans = 0;
	for(lld step = 1; step > 0; step >>= 1)
		for(; check(n, ans+step); ans += step, step <<= 1)
			;

	printf("%lld\n", ans+1);
	return 0;
}