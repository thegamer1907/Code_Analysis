#include <bits/stdc++.h>

int n, k;
int cnt[20];

bool check(int a, int b){
	return !(a & b);
}

int main(){
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; ++ i){
		int s = 0;
		for(int j = 1; j <= k; ++ j){
			int x;
			scanf("%d", &x);
			s = s << 1 | x;
		}
		++ cnt[s];
	}
	bool flag = cnt[0];
	for(int i = 0; i < (1 << k); ++ i){
		if(cnt[i] >= 2 && check(i, i)) flag = true;
		for(int j = i + 1; j < (1 << k); ++ j){
			if(cnt[i] && cnt[j] && check(i, j)) flag = true;
		}
	}
	puts(flag ? "YES" : "NO");
	return 0;
}