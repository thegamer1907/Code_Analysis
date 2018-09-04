#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long LL;
const int N = 200005;

int n;
int a[N];
LL lf[N], rg[N], ans;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		lf[i] = lf[i - 1] + a[i];
	}
	for (int i = n; i >= 1; --i) {
		rg[n - i + 1] = rg[n - i] + a[i];
	}
	for (int i = 1; i <= n; ++i) {
		int ps = lower_bound(rg + 1, rg + 1 + n, lf[i]) - rg;
		if (rg[ps] == lf[i] && i + ps <= n) ans = lf[i];
	}
	printf("%lld\n", ans);
	
	return 0;
}