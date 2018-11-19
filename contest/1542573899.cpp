#include<bits/stdc++.h>
using namespace std;
int vis[30];
int main(){
#ifdef AC
	freopen("data.txt", "r", stdin);
#endif
	int n, x, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int ret = 0;
		for (int j = 0; j < k; j++) scanf("%d", &x), ret += x * (1 << j);
		vis[ret]++;
	}
	for (int i = 0; i < (1 << k); i++)
		for (int j = 0; j < (1 << k); j++)
			if ( (i & j) == 0 && vis[i] != 0 && vis[j] != 0) return 0 * puts("YES");
	return 0 * puts("NO");
}
