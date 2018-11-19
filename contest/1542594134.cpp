#include <bits/stdc++.h>

#define MAXN (110)

int n;
char str[MAXN][3], ans[3];

int main(){
	scanf("%s", ans);
	scanf("%d", &n);
	for(int i = 1; i <= n; ++ i){
		scanf("%s", str + i);
	}
	bool flag = false;
	for(int i = 1; i <= n; ++ i){
		if(str[i][0] == ans[0] && str[i][1] == ans[1]) flag = true;
		for(int j = 1; j <= n; ++ j){
			if(str[i][1] == ans[0] && str[j][0] == ans[1]) flag = true;
		}
	}
	puts(flag ? "YES" : "NO");
	return 0;
}