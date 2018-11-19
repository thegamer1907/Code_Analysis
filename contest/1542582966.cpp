#include <bits/stdc++.h>
using namespace std;

int num[22], sum[7];
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < k; j++) {
			int tmp;
			scanf("%d", &tmp);
			if (tmp) sum[j]++;
			s = s * 2 + tmp;
		}
		num[s]++;
	}
	if (k == 1) return puts(num[0] ? "YES" : "NO"), 0;
	if (k == 2) {
		if (num[0]) return puts("YES"), 0;
		if (num[1] and num[2]) return puts("YES"), 0;
		return puts("NO");
	}
	if (k == 3) {
		if (num[0]) return puts("YES"), 0;
		if (num[1] and (num[2] or num[4] or num[6])) return puts("YES"), 0;
		if (num[2] and (num[1] or num[4] or num[5])) return puts("YES"), 0;
		if (num[4] and (num[1] or num[2] or num[3])) return puts("YES"), 0;
		return puts("NO"), 0;
	}
	if (num[0]) return puts("YES"), 0;
	for (int i = 0; i < 4; i++) {
		int cur = (1 << i);
		bool flg = 0;
		for (int j = 0; j < 16; j++) if ((cur & j) == 0 and num[j] and num[cur]) flg = 1;
		if (flg) return puts("YES"), 0;
	}
	if ((num[3] and num[12]) or (num[5] and num[10]) or (num[6] and num[9])) return puts("YES"), 0;
	puts("NO");
	return 0;
}
