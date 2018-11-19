//Mitesh Agrawal
#include <bits/stdc++.h>
using namespace std;

int arr[20];
int cnt[4];
int main(){
	int i,j,n,k,k1,l,flag;
	int temp[4];
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++){
		for(j = 0; j < 4; j++)
			temp[j] = 0;
		for(j = 0; j < k; j++)
			scanf("%d", &temp[j]);
		arr[temp[0] + 2 * temp[1] + 4 * temp[2] + 8 * temp[3]] = 1;
	}
	for(i = 0; i < (1 << 16); i++){
		for(j = 0; j < 4; j++)
			cnt[j] = 0;
		l = 0;
		for(j = 0; j < 16; j++){
			if((i >> j) & 1 && arr[j]){
				// printf("here %d\n", j);
				l++;
				for(k1 = 0; k1 < 4; k1++){
					if((j >> k1) & 1){
						cnt[k1]++;
					}
				}
			}
		}
		flag = 1;
		for(j = 0; j < 4; j++){
			if(2 * cnt[j] > l){
				flag = 0;
				break;
			}
		}
		if(flag && l){
			// printf("%d %d\n", i, l);
			// for(j = 0; j < 4; j++)
			// 	printf("%d ", cnt[j]);
			// printf("\n");
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");

    return 0;
}