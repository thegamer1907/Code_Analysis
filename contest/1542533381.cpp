#include <bits/stdc++.h>
using namespace std;
bool dp[1<<16];
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++){
		int b = 0;
		for(int j=0;j<k;j++){
			int a;
			scanf("%d", &a);
			if(a) b += (1<<j);
		}
		dp[b] = 1;
	}
	if(dp[0]){
		printf("YES\n");
		return 0;
	}
	for(int i=0;i<(1<<16);i++){
		if(!dp[i]) continue;
		for(int j=0;j<(1<<16);j++){
			if(!dp[j]) continue;
			if((i&j) == 0){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}