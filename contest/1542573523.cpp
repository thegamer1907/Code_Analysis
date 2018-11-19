#include <bits/stdc++.h>
using namespace std;
char a[10], b[10];
int c[30], d[30];
int main()
{
	int n, fg = 0;
	
	scanf("%s%d", a, &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", b);
		if (!strcmp(b, a)) fg = 1;
		d[b[0] - 'a']++;
		c[b[1] - 'a']++;
	}
	if (fg) puts("YES");
	else {
		if (c[a[0] - 'a'] && d[a[1] - 'a']) puts("YES");
		else puts("NO");
	}
}
