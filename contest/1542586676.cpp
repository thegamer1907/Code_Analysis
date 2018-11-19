#include <bits/stdc++.h>

int n, k;
int cnt[1 << 4];

int main() {
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; ++i) {
		int S = 0, t;
		for (int j = 0; j < k; ++j) {
			scanf("%d", &t);
			S |= (t << j);
		}
		++cnt[S];
	}
	
	if (cnt[0]) {
		puts("YES");
		return 0;
	}
	
	for (int i = 0; i < (1 << k); ++i) if (cnt[i]) {
		--cnt[i];
		for (int j = 0; j < (1 << k); ++j) if (cnt[j]) {
			if (!(i & j)) {
				puts("YES");
				return 0;
			}
		}
		++cnt[i];
	}
	
	puts("NO");
	
	return 0;
}