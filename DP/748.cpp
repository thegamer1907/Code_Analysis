#include "bits/stdc++.h"
#define MAXN 110
#define INF 1e9
using namespace std;

int main(){
	int n, v[MAXN], k=0; scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		scanf("%d", v + i);
		k += v[i];
	}
	int ans = -INF;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			int temp = k;
			for(int t=i; t<=j; t++){
				if((1 - v[t]) == 1)
					temp++;
				else
					temp--;
			}
			ans = max(ans, temp);
		}
	}
	printf("%d\n", ans);
	return 0;
}