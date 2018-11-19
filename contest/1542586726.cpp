#include<bits/stdc++.h>
using namespace std;

int vis[20], flag;
int a, n, K, now;

int main(){
	scanf("%d%d", &n, &K);
	for (int i=1; i<=n; i++){
		now = 0;
		for (int j=1; j<=K; j++){
			scanf("%d", &a);
			now = now*2 + a;
		}
		if (now == 0) { puts("YES"); return 0; }
		for (int j=0; j<(1<<K); j++){
			flag = vis[j];
			for (int k=0; k<=K-1; k++)
				if ((j>>k&1) && (now>>k&1)){
					flag = 0; break;
				}
			if (flag){
				puts("YES"); return 0;
			}
		}
		vis[now] = 1;
	}
	puts("NO");
	return 0;
}
