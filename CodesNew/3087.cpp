#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

const int N = 1000100;
int n, m, a[N], sum;
long long l[N], r[N];
char s[N];

int main(void) {
	scanf("%d", &m);
	scanf("%s", s + 1);
	n = strlen(s + 1);
	sum = 0;
	for (int i = 1; i <= n; ++i)
		if (s[i] == '1') a[++sum] = i;
	int pre = 0;
	for (int i = 1; i <= sum; ++i)
		l[i] = a[i] - pre, pre = a[i];
	pre = n + 1;
	for (int i = sum; i; --i)
		r[i] = pre - a[i], pre = a[i];
	if (m == 0) {
		long long ans = 0;
		for (int i = 1; i <= sum; ++i)
			ans += l[i] * (l[i] - 1) / 2;
		ans += r[sum] * (r[sum] - 1) / 2;
		if (sum == 0) ans = 1LL * (n + 1) * n / 2;
		printf("%lld\n", ans);
		return 0;
	}
	long long ans = 0;
	for (int i = 1; i + m - 1 <= sum; ++i) {
		long long tmp = l[i] * r[i + m - 1];
		ans += tmp;
	}
	printf("%lld\n", ans);
	
	return 0;
}