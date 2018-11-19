#include <bits/stdc++.h>
using namespace std;

#define N 111

char s[N][3];
int n;

int main() {
	//freopen("r.in", "r", stdin);
	gets(s[0]);
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i ++) gets(s[i]);
	int flag = 0;
	for (int i = 1; i <= n; i ++) if (s[i][0] == s[0][0] && s[i][1] == s[0][1]) flag = 1;
	if (flag) {
		puts("YES");
		return 0;
	}
	for (int i = 1; i <= n; i ++) {
		if (s[i][0] == s[0][1]) {
			flag ++;
			break;
		}
	}
	for (int i = 1; i <= n; i ++) {
		if (s[i][1] == s[0][0]) {
			flag ++;
			break;
		}
	}
	if (flag == 2) puts("YES");
	else puts("NO");

	return 0;
}
