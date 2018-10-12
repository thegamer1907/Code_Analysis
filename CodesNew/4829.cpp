#include <bits/stdc++.h>
using namespace std;

int arr[654321];

int cmpfunc(const void *a, const void *b){
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int j = n / 2;
	if(n%2 != 0){
		j++;
	}
	int ans = j;
	int i = 0;
	qsort(arr, n, sizeof(int), cmpfunc);
	for(j; j<n; j++){
		if(arr[j] >= 2*arr[i]){
			i++;
		}
		else{
			ans ++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
/**
8
2
5
7
6
9
8
4
2
*/
