#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

int fast[20] = { 0 };

int main() {
	int n, k,i,j;
	int a,t,coef,flag=0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		coef = 1;
		t = 0;
		for (j = 0; j < k; j++) {
			scanf("%d",&a);
			t += a*coef;
			coef *= 2;
		}
		fast[t] = 1;
	}

	for (i = 0; i <= 16; i++) {
		for (j = 0; j <= 16; j++) {
			if ((fast[i]&&fast[j])) {
				if (!(i&j))flag=1;
			}
		}
	}

	if (flag)puts("YES");
	else puts("NO");
}