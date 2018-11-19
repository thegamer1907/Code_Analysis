#include <cstdio>
int n, k;
int a[100001][4], b[100001], cnt[16] = {0};
int main (){
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++){
		b[i] = 0;
		for (int j = 0; j < k; j++){
			scanf("%d", &a[i][j]);
			b[i] = b[i] * 2 + a[i][j];
		}
		cnt[b[i]]++;
	}
	if (k == 1){
		if (cnt[0] > 0)
			printf("YES\n");
		else 
			printf("NO\n");
	} else if (k == 2){
		if (cnt[0] > 0)
			printf("YES\n");
		else if (cnt[1] > 0 && cnt[2] > 0)
			printf("YES\n");
		else 
			printf("NO\n");
	} else if (k == 3){
		if (cnt[0] > 0)
			printf("YES\n");
		else if (cnt[1] > 0 && (cnt[2] > 0 || cnt[4] > 0 || cnt[6] > 0))
			printf("YES\n");
		else if (cnt[2] > 0 && (cnt[1] > 0 || cnt[4] > 0 || cnt[5] > 0))
			printf("YES\n");
		else if (cnt[4] > 0 && (cnt[1] > 0 || cnt[2] > 0 || cnt[3] > 0))
			printf("YES\n");
		else 
			printf("NO\n");
	} else if (k == 4){
		if (cnt[0] > 0)
			printf("YES\n");
		else if (cnt[1] > 0 && (cnt[2] > 0 || cnt[4] > 0 || cnt[8] > 0 || cnt[6] > 0 || cnt[10] > 0 || cnt[12] > 0 || cnt[14] > 0))
			printf("YES\n");
		else if (cnt[2] > 0 && (cnt[1] > 0 || cnt[4] > 0 || cnt[8] > 0 || cnt[5] > 0 || cnt[9] > 0 || cnt[12] > 0 || cnt[13] > 0))
			printf("YES\n");
		else if (cnt[4] > 0 && (cnt[1] > 0 || cnt[2] > 0 || cnt[8] > 0 || cnt[3] > 0 || cnt[9] > 0 || cnt[10] > 0 || cnt[11] > 0))
			printf("YES\n");
		else if (cnt[8] > 0 && (cnt[1] > 0 || cnt[2] > 0 || cnt[4] > 0 || cnt[3] > 0 || cnt[5] > 0 || cnt[6] > 0 || cnt[7] > 0))
			printf("YES\n");
		else if (cnt[3] > 0 && cnt[12] > 0)
			printf("YES\n");
		else if (cnt[5] > 0 && cnt[10] > 0)
			printf("YES\n");
		else if (cnt[9] > 0 && cnt[6] > 0)
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}