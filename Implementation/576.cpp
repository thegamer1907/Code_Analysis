#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int n, iPlace, count=0;
	
	scanf ("%d %d", &n, &iPlace);
	
	int contestant[n+2] = {};
	
	for (int i=1; i<=n; i++) {
		scanf("%d", &contestant[i]);
	}
	
	for (int i=1; i<=n; i++) {
		if (contestant[i] >= contestant[iPlace]) {
			if (contestant[i] != 0) {
				count++;
			}
		}
	}
	
	printf("%d", count);

	printf("\n");

	return 0;


}
