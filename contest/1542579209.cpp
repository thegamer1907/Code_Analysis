#include<cstdio>
int f[50], n, k, c, x;
bool ok;
int main() {
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++) {
		c = 0;
		for(int j = 1; j <= k; j++) {
			scanf("%d", &x);
			c <<= 1;
			c |= x;
		}
		f[c]++;
	}
	for(int i = 0; i <= 1<<k; i++) for(int j = 0; j <= i; j++) if((i & j) == 0 && f[i] && f[j]) ok = true;
	if(ok) printf("YES\n");
	else printf("NO\n");
}
