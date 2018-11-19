#include<bits/stdc++.h>
using namespace std;
int n, k, cnt[1000], x;
void doit(int x) {
	for(int i = 0; i < (1 << k); i++) if(cnt[i]){//printf("%d %d\n", i, x);
		if(x & i) continue;
		
		printf("YES");
		exit(0);
	}
}

int main() {
	scanf("%d%d", &n, &k);
	//printf("%d",0 & (-1));
	for(int i = 1; i <= n; i++) {
		int now = 0, cnft = 0;
		for(int j = 1; j <= k; j++) {
			scanf("%d", &x);
			now |= x * (1 << (j - 1));
			cnft += x;
		}
		cnt[now]++;
		if(cnft == 0) {
			printf("YES");
			return 0;
		}
	//	printf("%d\n", now);
	}
	
	for(int i = 0; i < (1 << k); i++) {
		if(cnt[i]) {
			cnt[i]--;
			doit(i);
			cnt[i]++;
		}
	}
	if(n == 1) {
		if(cnt[0] == n) {
			printf("YES");
		return 0;
		}
	}//printf("1\n");
	printf("NO");
	return 0;
}