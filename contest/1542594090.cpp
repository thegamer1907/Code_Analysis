#include <bits/stdc++.h>
using namespace std;

char ch[1282][48];
int n;
char c[48];

int main(void) {
	scanf("%s", c);
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", ch[i]);
		if (c[0] == ch[i][0] && c[1] == ch[i][1]) {
			puts("YES"); return 0;
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		if (ch[i][1] == c[0] && ch[j][0] == c[1]) {
			puts("YES"); return 0;
		}
	puts("NO");
	return 0;
}