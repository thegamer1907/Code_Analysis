#include <bits/stdc++.h>
#ifdef TOPOLOGY
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
using namespace std;

int cnt[16], n, k;

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		int bit = 0, tmp;
		for (int j = 0; j < k; j++) {
			scanf("%d", &tmp);
			bit = bit << 1 | tmp;
		}
		if (!bit) {
		    puts("Yes");
		    return 0;
		}
		cnt[bit]++;
	}
	vector<int> v;
	for (int i = 0; i < 16; i++) {
		if (cnt[i]) v.push_back(i);
	}
	for (int i = 1; i < 16; i <<= 1) {
		bool f = true;
		for (auto &b : v) {
			if (!(b & i)) {
				f = false;
				break;
			}
		}
		if (f) {
			puts("No");
			return 0;
		}
	}
	if (cnt[1] || cnt[2] || cnt[4] || cnt[8]) {
		puts("Yes");
		return 0;
	}
	for (int i = 1; i < 16; i <<= 1) {
		for (int j = 1; j < 16; j <<= 1) {
			if (i == j) continue;
			int bit = i | j;
			if (cnt[bit]) {
				for (auto &b : v) {
					if ((b & bit) == 0) {
						puts("Yes");
						return 0;
					}
				}
			}
		}
	}
	puts("No");
	return 0;
	return 0;
}