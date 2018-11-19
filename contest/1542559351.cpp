#include <bits/stdc++.h>

using namespace std;

bool c[22];

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; ++i){
		int z = 0;
		for (int j = 0; j < k; ++j) {
			int x;
			scanf("%d", &x);
			z |= (x << j);
		}
		c[z] = 1;
	}
	for (int i = 0; i < 1 << k; ++i) {
		for (int j = 0; j < 1 << k; ++j) {
			if (c[i] && c[j] && !(i & j)) {
				return !printf("YES");
			}
		}
	}
	puts("NO");
	return 0;
}