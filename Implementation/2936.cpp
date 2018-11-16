#include <bits/stdc++.h>

const int N = 100000 + 5;

int n, q, qa, d[N];

int main() {
	while (scanf("%d", &n) != EOF) {
		for (int i = 1; i <= n; i ++) {
			scanf("%d", &d[i]);
		}
		std::sort(d + 1, d + 1 + n);
		scanf("%d", &q);
		for (int i = 1; i <= q; i ++) {
			scanf("%d", &qa);
			int idx = std::upper_bound(d + 1, d + 1 + n, qa) - d;
			printf("%d\n", idx - 1);
		}
	}
	return 0;
}
