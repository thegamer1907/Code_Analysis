#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 5;
int n, k, l, a[MAX], mk[MAX], s[MAX];

int main() {
	scanf("%d%d", &n, &k);

	for(int i = 1; i <= n; i++) {
		int msk = 0;
		for(int j = 0; j < k; j++) {
			int x; scanf("%d", &x);

			if(x)
				msk |= 1 << j;
		}

		if(mk[msk])
			continue;

		mk[msk] = 1;
		a[l++] = msk;
	}

	for(int mask = 1; mask < (1 << l); mask++) {
		for(int i = 0; i < k; i++)
			s[i] = 0;

		for(int i = 0; i < l; i++) {
			if(mask & 1 << i) {
				for(int q = 0; q < k; q++) {
					if(a[i] & 1 << q)
						s[q]--;

					else s[q]++;
				}
			}
		}

		int bad = 0;
		for(int i = 0; i < k; i++)
			if(s[i] < 0)
				bad = 1;

		if(!bad) {
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");
	return 0;
}