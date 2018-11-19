#include <cstdio>
using namespace std;
int table[16];
int main(int argc, char const *argv[])
{
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; ++i) {
		int c = 0;
		for (int j = 0; j < k; ++j) {
			int t;
			scanf("%d", &t);
			c = c << 1 | t;
		}
		table[c]++;
	}
	// for (int i = 0; i < 16; ++i) {
	// 	if (table[i]) {
	// 		printf("tab: %d\n", i);
	// 	}
	// }
	if (table[0] > 0) {
		printf("YES\n");
		return 0;
	}
	for (int i = 0; i < (1 << (1<<k)); ++i) {
		int t = i, idx = 0;
		int cnt = 0;
		int ary[4] = { 0, 0, 0, 0 };
		bool ack = false;
		while (t > 0) {
			if (t & 1) {
				if (table[idx] > 0) {
					int j = idx;
					int jidx = 0;
					while (j > 0) {
						if (j & 1) {
							ary[jidx]++;
						}
						j >>= 1;
						jidx++;
					}
					cnt++;
				} else {
					ack = true;
				}
			}
			t >>= 1;
			idx++;
		}
		if (!ack) {
			int ans = cnt > 0;
			for (int j = 0; j < k; ++j) {
				if (ary[j] > cnt / 2) {
					ans = false;
				}
			}
			// printf(
			// 	"tst: %04x; cnt: %2d ~[%d %d %d %d]\n",
			// 	i, cnt, ary[0], ary[1], ary[2], ary[3]
			// );
			if (ans) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
