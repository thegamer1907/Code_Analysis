#include <stdio.h>
#include <iostream>
#include <vector>
#include <assert.h>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int f[16];
char dp[16][21][11][11][11][11];
bool calc(int i, int p, int a, int b, int c, int d) {
	if (a >= 11 || b >= 11 || c >= 11 || d >= 11)
		return false;
	if (p && a <= p / 2 && b <= p / 2 && c <= p / 2 && d <= p / 2)
		return true;
	if (i == 16)
		return false;
	char &ret = dp[i][p][a][b][c][d];
	if (ret != -1)
		return ret;
	ret = false;
	for (int take = 0; take <= f[i] && take <= 20 - p; ++take) {
		if (calc(i + 1, p + take, a + (i & 1)*take, b + ((i >> 1) & 1)*take, c + ((i >> 2) & 1)*take, d + ((i >> 3) & 1)*take))
			return ret = true;
	}
	return ret;
}
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int x;
	for (int i = 0; i < n; ++i) {
		int cur = 0;
		for (int j = 0; j < k; ++j) {
			scanf("%d", &x);
			cur |= x << j;
		}
		++f[cur];
	}
	memset(dp, -1, sizeof(dp));
	if (calc(0, 0, 0, 0, 0, 0))
		puts("YES");
	else
		puts("NO");
	return 0;
}