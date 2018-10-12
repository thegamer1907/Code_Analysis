#include <bits/stdc++.h>

using namespace std;

#define N 300000

int a[N + 1];
int sum[N + 1];
int n, k;

int query(int l, int r){
	return sum[r] - sum[l - 1];
}

bool check(int x){
	int i;

	for (i = 1; i <= n - (x - 1); i++){
		if (query(i, i + x - 1) <= k){
			return true;
		}
	}

	return false;
}

int main(){
	int l, r, m, i, j;

	scanf("%d%d", &n, &k);

	for (i = 1; i <= n; i++){
		scanf("%d", a + i);
	}

	for (i = 1; i <= n; i++){
		sum[i] = sum[i - 1] + (a[i] == 0);
	}

	l = 0;
	r = n;

	while (l < r){
		m = (l + r + 1) / 2;

		if (check(m)){
			l = m;
		}
		else{
			r = m - 1;
		}
	}

	for (i = 1; i <= n - (l - 1); i++){
		if (query(i, i + l - 1) <= k){
			for (j = i; j <= i + l - 1; j++){
				a[j] = 1;
			}

			break;
		}
	}

	printf("%d\n", l);

	for (i = 1; i <= n; i++){
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}