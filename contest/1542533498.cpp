#include <bits/stdc++.h>
using namespace std;

int n;
char a[2], b[105][2], c[5];

int main() {
	scanf("%s%d", a, &n);

	for(int i = 1; i <= n; i++)
		scanf("%s", b[i]);

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			int l = 0;
			for(int k = 0; k < 2; k++)
				c[l++] = b[i][k];

			for(int k = 0; k < 2; k++)
				c[l++] = b[j][k];

			for(int k = 0; k < l - 1; k++) {
				if(c[k] == a[0] && c[k + 1] == a[1]) {
					printf("YES\n");
					return 0;
				}
			}
		}
	}

	printf("NO\n");
	return 0;
}