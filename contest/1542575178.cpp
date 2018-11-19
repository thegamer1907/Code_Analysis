#include <bits/stdc++.h>
using namespace std;
int cnt[20], n, k, x;
int main(void) {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int cur = 0;
		for (int j = 0; j < k; j++) {
			scanf("%d", &x);
			cur = cur * 2 + x;
		}
		cnt[cur]++;
	}
	
	for (int i = 0; i < 1 << k; i++) {
		for (int j = 0; j < 1 << k; j++) {
			if (cnt[i] > 0 && cnt[j] > 0 && (i & j) == 0) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}