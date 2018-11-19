#include <cstdio>

char pw[5], wd[5];
bool ans[2];
int main() {
	scanf("%s", pw);
	int n; scanf("%d", &n);
	while(n--) {
		scanf("%s", wd);
		for(int i = 0; i < 2; i++) {
			if(pw[i] == wd[i ^ 1]) ans[i] = true;
		}
		if(pw[0] == wd[0] && pw[1] == wd[1]) ans[0] = ans[1] = true;
	}
	if(ans[0] && ans[1]) printf("YES\n");
	else printf("NO\n");
}