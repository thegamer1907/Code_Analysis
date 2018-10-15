#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int arr[n];
	for(int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	int ans = 0;
	int z = 0;
	int o = 0;
	int s = 0;
	int pos = -1;
	for(int i = 0; i < n; ++i) {
		if(arr[i]) ++o;
		else ++z;
		if(z > k) {
			if(arr[s]) --o;
			else --z;
			++s;
		} else {
			if(o + z > ans) {
				ans = o + z;
				pos = i - (o + z) + 1;
			}
		} 
	}
	if(pos == -1) {
		printf("0\n");
		for(int i = 0; i < n; ++i) {
			printf("0 ");
		}
		printf("\n");
		return 0;
	}
	printf("%d\n", ans);
	for(int i = 0; i < n; ++i) {
		if(i >= pos && i <= pos + ans - 1) {
			printf("1 ");
		} else {
			printf("%d ", arr[i]);
		} 
	}
	printf("\n");
}	