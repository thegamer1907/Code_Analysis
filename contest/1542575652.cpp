#include <bits/stdc++.h>
using namespace std;

int n, k;
bool a[101010][11];
int cnt[101010];

bool hs[111];

bool check(int x) {
	for(int i = 1; i <= x; ++i) {
		if((x & i) == i && hs[i])
			return 1;
	}
	return 0;
}

int main() {
	scanf("%d%d", &n, &k);
	bool flag = 0;
	for(int i = 1; i <= n; ++i) {
		int tmp = 0;
		for(int j = 1; j <= k; ++j) {
			scanf("%d", &a[i][j]);
			cnt[i] += a[i][j];
			tmp = (tmp<<1) + a[i][j];
		}
		cnt[i] = tmp;
		if(!cnt[i])
			flag = 1;
		hs[tmp] = 1;
	}
	if(!flag) {
		int ful = (1<<k) - 1;
		for(int i = 1;i <= n; ++i) {
			int res = ful ^ cnt[i];
			if(check(res)) {
				flag = 1;
				break;
			}
		}
	}
	
	printf("%s\n", flag ? "YES" : "NO");

	return 0;
}