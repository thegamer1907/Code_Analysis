#include<cstdio>
char c[100 + 10][3];
char x[3];
char y[3];

int main() {
	int n;
	scanf("%s%d", x, &n);
	int test = 0;
	int f1 = 0, f2 = 0;
	int i1, i2;
	for (int i = 1;i <= n;i++) {
		scanf("%s", y);
		if (y[0] == x[0] && y[1] == x[1]) { test = 1;continue; }
		if (y[0] == x[1]) {
			if (!f1)i1 = i;
			f1++;
		}
		if (y[1] == x[0]) {
			if (!f2)i2 = i;
			f2++;
		}
	}
	if (test) printf("YES");
	else if (f1 == 0 || f2 == 0)printf("NO");
	else if (f1 > 1 || f2 > 1)printf("YES");
	//else if (i1 == i2)printf("NO");
	else printf("YES");
	return 0;
}