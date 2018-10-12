#include <bits/stdc++.h>
using namespace std;
#define maxn 100010
typedef long long li;
li a[maxn];
int main()
{
	int n;
	li mx = -1, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%lld", a + i);
		mx = max(mx, a[i]);
		sum += a[i];
	}
	sum = n * mx - sum;
	if (sum > mx) printf("%lld\n", mx);
	else printf("%lld\n", ((mx - sum) * n + n - 2) / (n - 1) + sum);
	return 0;
}
                                                                                                                             