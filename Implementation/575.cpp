#include <stdlib.h>
#include <stdio.h>

int n, k;
int a, v;
int count;

int main() {
	
	scanf("%d", &n);
	scanf("%d", &k);

	count = 0;

	for(int i = 1; i <= n; i++) {
		scanf("%d", &a);
		
		if(i <= k && a > 0) {
			count++;
			v = a;
		} else if(a > 0 && a == v && !(i <= k)) {
			count++;
		}
	}

	printf("%d", count);	
}