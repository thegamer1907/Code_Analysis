#include <stdio.h>
int main()
{
	long long n, k, r, p, discard = 0;
	int m, ans = 0, i = 0;
	scanf("%lld%d%lld%lld", &n, &m, &k, &p);
	while(i < m) {
		r = ((p - discard - 1) / k + 1) * k + discard;
		while(i < m && p <= r) {
			++discard;
			++i;
			scanf("%lld", &p);
		}
		++ans;
	}
	printf("%d", ans);
}