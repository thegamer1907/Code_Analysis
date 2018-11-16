#include <stdio.h>

int a[100001], n, c[100001], m;
int r[100002];

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = n; i >= 1; i--) {
		r[i] = r[i + 1];
		if (c[a[i]] == 0) r[i]++;
		c[a[i]]++;
	}
	while (m--) {
		int l;
		scanf("%d", &l);
		printf("%d\n", r[l]);
	}
	return 0;
}