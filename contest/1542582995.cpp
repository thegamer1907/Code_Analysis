#include <bits/stdc++.h>

using namespace std;

bool can;

int n, k, b[22], cnt[22], c[22];
int main() {

	//freopen("in.txt", "r", stdin);
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		
		int s = 0;
		for (int j = 0; j < k; j++) {
			
			int u; scanf("%d", &u); s = s * 2 + u;
		}
		cnt[s]++;
	}
	
	for (int i = 0; i < 22; i++) b[i] = (i == 0 ? 1 : b[i - 1] * 2);
	
	for (int i = 1; i < b[b[k]]; i++) {
		
		bool flg = false;
		for (int j = 0; j < b[k]; j++) if ((i & b[j]) && cnt[j] == 0) flg = true;
		if (flg) continue;
		int tot = 0;
		for (int t = 0; t < k; t++) c[t] = 0;
		for (int j = 0; j < b[k]; j++) {
			if (i & b[j]) {
				tot++;
			
				for (int t = 0; t < k; t++) if (j & b[t]) c[t]++;
			}
		}
		flg = false;
		for (int t = 0; t < k; t++) if (2 * c[t] > tot) flg = true;
		if (!flg) can = true;
	}
	printf("%s\n", can ? "YES" : "NO");	
	return 0;
}
