#include <cstdio>

const int MAXN = 100005;
const long long INFTY = 0x3fffffffffffffffLL;
int N, K, a[MAXN], cnt[MAXN], l, r;
long long cost, f[MAXN], g[MAXN];

void solve(int indexL, int indexR, int choiceL, int choiceR) {
	int indexM = (indexL + indexR) >> 1, choiceOpt;
	g[indexM] = INFTY;
	// (l, r) -> (choiceL, indexM)
	while (l > choiceL) cost += (cnt[a[--l]]++);
	while (r <  indexM) cost += (cnt[a[++r]]++);
	while (l < choiceL) cost -= (--cnt[a[l++]]);
	while (r >  indexM) cost -= (--cnt[a[r--]]);
	for (int i = choiceL; i <= choiceR && i <= indexR; ++i) {
		long long c = f[i - 1] + cost;
		if (g[indexM] > c)
			g[indexM] = c, choiceOpt = i;
		cost -= (--cnt[a[l++]]);
	}
	if (indexL < indexM)
		solve(indexL, indexM - 1, choiceL, choiceOpt);
	if (indexM < indexR)
		solve(indexM + 1, indexR, choiceOpt, choiceR);
}

int main() {
	scanf("%d%d", &N, &K);
	for (int i = 1; i <= N; ++i)
		scanf("%d", a + i), f[i] = cost += (cnt[a[i]]++);
	l = 1, r = N;
	for (int i = 2; i <= K; ++i) {
		solve(1, N, 1, N);
		for (int j = 1; j <= N; ++j)
			f[j] = g[j];
	}
	printf("%I64d\n", f[N]);
	return 0;
}
