#include <bits/stdc++.h>
using namespace std;

int a[2][2][2][2], b[4];
int sum[4];

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i=0;i<n;i++){
		memset(b, 0, sizeof(b));
		for(int j=0;j<k;j++) scanf("%d", &b[j]);
		a[b[0]][b[1]][b[2]][b[3]]++;
	}
	if(a[0][0][0][0] >= 1){
		printf("YES\n");
		return 0;
	}

	bool r[4] = {0};
	int t[4] = {0};
	for(int i=1;i<=n;i++){
		bool g[4] = {0};
		int res = -1;
		for(int j=0;j<(1<<4);j++){
			bool c[4] = {0};
			for(int k=0;k<4;k++){
				if((j>>k)&1) c[k] = 1;
			}
			if(a[c[0]][c[1]][c[2]][c[3]] == 0) continue;
			if(c[0] == r[0] && c[1] == r[1] && c[2] == r[2] && c[3] == r[3]){
				for(int k=0;k<4;k++) g[k] = c[k];
				break;
			}
			int mx = 0;
			for(int k=0;k<4;k++){
				if(c[k] == 0 && r[k] == 0) mx++;
			}
			if(mx > res){
				for(int k=0;k<4;k++) g[k] = c[k];
				res = mx;
			}
		}

		for(int j=0;j<4;j++){
			if(g[j] == 1) t[j]++;
		}
		a[g[0]][g[1]][g[2]][g[3]]--;

		bool ok = 1;
		for(int j=0;j<4;j++){
			if(t[j]*2 <= i){
				r[j] = 1;
				continue;
			}
			r[j] = 0;
			ok = 0;
		}
		// printf("i = %d -> %d %d %d %d\n", i, g[0], g[1], g[2], g[3]);
		if(ok){
			printf("YES\n");
			return 0;
		}

	}

	printf("NO\n");
}