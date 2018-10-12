#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;

const int maxn = 200001;

long long a[maxn*2];

int main() {
	int n, q;
	scanf("%d%d", &n, &q);
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		a[i + n] = a[i];
		sum += a[i];
	}
	for (int i = 1; i <= 2 * n; i++) {
		a[i] += a[i - 1];
	}
	int i = 1;
	long long cur = a[1];
	while (q--) {
		long long t;
		scanf("%lld", &t);
		if (t > sum) {
			i = 1;
			cur = a[1];
			printf("%d\n", n);
			continue;
		}
		int pos = upper_bound(a + 1, a + 1 + 2 * n, t + a[i] - cur) - a;
		cur = a[pos] - t - a[i] + cur;
		if (pos > n) {
			pos = 1;
			cur = a[1];
		}
		printf("%d\n", n - pos + 1);
		i = pos;
	}
	return 0;
}