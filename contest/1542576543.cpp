#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<assert.h>
#include<iostream>
#include<string>
#include<bitset>
using namespace std;

bool a[200];
int b[200][5];
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int x, rt = 1;
		int s[5];
		memset(s, 0, sizeof(s));
		for (int j = 0; j < k; j++) {
			scanf("%d", &x);
			if (x) {
				rt = rt << 1;
				s[j] = 1;
			}
			else rt = rt << 1 | 1;
		}
		a[rt] = 1;
		for (int j = 0; j < k; j++)
			b[rt][j] = s[j];
	}
	int rt = (1 << k);
	bool ans = 0;
	for (int i = rt; i < rt << 1; i++)
		for (int j = i + 1; j < rt << 1; j++)
			if (a[i] && a[j]) {
				bool flag = 1;
				for (int l = 0; l < k; l++)
					if (b[i][l] + b[j][l] >= 2) flag = 0;
				ans = max(ans, flag);
			}
	if (a[(rt << 1) - 1]) ans = 1;
	printf("%s\n", ans ? "YES" : "NO");
	//system("pause");
	return 0;
}