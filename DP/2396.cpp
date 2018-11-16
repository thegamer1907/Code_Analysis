#include <stdio.h>

int a[150001], n, k;
int s[150001];

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	int res = (1 << 30), idx;
	for (int i = 1; i + k - 1 <= n; i++) {
		int v = s[i + k - 1] - s[i - 1];
		if (v < res) {
			res = v; idx = i;
		}
	}
	printf("%d\n", idx);
	return 0;
}