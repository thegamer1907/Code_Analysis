#include <cstdio>

int n, k;
bool has[16];
int main() {
	scanf("%d%d", &n, &k);
	while(n--) {
		int b = 0;
		for(int i = 0; i < k; i++) {
			int a; scanf("%d", &a);
			b |= a << i;
		}
		has[b] = true;
	}
	bool ans = false;
	for(int i = 0; i < 16; i++) for(int j = 0; j < 16; j++) {
			if((i & j) == 0) if(has[i] && has[j]) ans = true;
		}
	if(ans) printf("YES\n");
	else printf("NO\n");
	return 0;
}