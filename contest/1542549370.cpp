#include <bits/stdc++.h>

using namespace std;

int n;
char x[105][5];

int main() {
	scanf("%s%d", x[0], &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", x[i]);
		if (x[0][0] == x[i][0] && x[0][1] == x[i][1]) {
			printf("YES\n");
			return 0;
		}
		for (int j = 1; j <= i; j++) {
			if (x[0][0] == x[i][1] && x[0][1] == x[j][0]) {
				printf("YES\n");
				return 0;
			}
			if (x[0][0] == x[j][1] && x[0][1] == x[i][0]) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
