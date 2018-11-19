#include <bits/stdc++.h>
using namespace std;

int n;
char strb[4];
char stra[200][4];

int ifa[4];

int main() {
	scanf("%s", strb);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", stra[i]);
		if (stra[i][0] == strb[0] && stra[i][1] == strb[1]) {
			puts("YES");
			exit(0);
		}
		if (stra[i][0] == strb[1]) {
			ifa[0] = 1;
		}
		if (stra[i][1] == strb[0]) {
			ifa[1] = 1;
		}
	}
	if (ifa[0] && ifa[1]) {
		puts("YES");
		exit(0);
	}
	puts("NO");
	return 0;
}
