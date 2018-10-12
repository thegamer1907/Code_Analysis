#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int array[n];
	for(int i=0; i<n; ++i) {
		scanf("%d", &array[i]);
	}
	sort(array, array+n);
	int mid=(n/2)-1;
	int counter=n;
	for(int i=mid, j=n-1; i>=0; ) {
		if(j==(n/2)-1) {
			break;
		}
		if(array[j]>=array[i]*2) {
			--i;
			--j;
			--counter;
		}
		else {
			--i;
		}
	}
	printf("%d\n", counter);
	return 0;
}