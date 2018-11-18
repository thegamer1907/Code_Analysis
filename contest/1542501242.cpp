#include <cstdio>
bool k[5], sum[110];

int main() {
	int n, m; scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= m; j ++)
			scanf("%d", &k[j]);
		 sum[k[1] + k[2] * 2 + k[3] * 4 + k[4] * 8] = true;
	}
	int len = (1 << m);
	for(int i = 0; i <= len; i ++)
		for(int j = 0; j <= len; j ++)
			if(i & j) continue;
			else if(sum[i] && sum[j]) return puts("YES"), 0;
	puts("NO");
	return 0;
}