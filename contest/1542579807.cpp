#include <bits/stdc++.h>

#define MAXN (210)
#define MAXB (14)

int n, m;
int len[MAXN];
char str[MAXN][MAXN], pre[MAXN][MAXB], suf[MAXN][MAXB];
char tmp[MAXN];
std::bitset<1 << MAXB> set[MAXN][MAXB];

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; ++ i){
		scanf("%s", str[i]);
		len[i] = strlen(str[i]);
	}
	for(int i = 1; i <= n; ++ i){
		for(int k = 1; k < MAXB; ++ k){
			for(int u = 0; u + k - 1 < len[i]; ++ u){
				int x = 0;
				for(int offset = 0; offset < k; ++ offset){
					x = (x << 1) | (str[i][offset + u] - '0');
				}
				set[i][k].set(x);
			}
		}
		
		if(len[i] < 13) strcpy(pre[i], str[i]), strcpy(suf[i], str[i]);
		else{
			for(int j = 0; j < 13; ++ j) pre[i][j] = str[i][j];
			for(int j = len[i] - 13; j < len[i]; ++ j) suf[i][j - len[i] + 13] = str[i][j];
		}
	}
	
	scanf("%d", &m);
	while(m --){
		int a, b;
		scanf("%d%d", &a, &b);
		for(int i = 1; i < MAXB; ++ i){
			set[n + 1][i] = set[a][i] | set[b][i];
		}
		strcpy(tmp, suf[a]);
		strcat(tmp, pre[b]);
		int len = strlen(tmp);
		for(int k = 1; k < MAXB; ++ k){
			for(int u = 0; u + k - 1 < len; ++ u){
				int x = 0;
				for(int offset = 0; offset < k; ++ offset){
					x = (x << 1) | (tmp[offset + u] - '0');
				}
				set[n + 1][k].set(x);
			}
		}
		
		int ans = 0;
		for(int i = 1; i < MAXB; ++ i){
			bool flag = true;
			for(int j = 0; j < (1 << i); ++ j){
				if(!set[n + 1][i][j]){
					flag = false;
					break;
				}
			}
			if(flag){
				ans = i;
			}
		}
		printf("%d\n", ans);
		
		if(strlen(suf[a]) < 13 && strlen(suf[b]) < 13){
			if(strlen(tmp) < 13) strcpy(suf[n + 1], tmp), strcpy(pre[n + 1], tmp);
			else{
				for(int i = 0; i < 13; ++ i) pre[n + 1][i] = tmp[i];
				for(int i = len - 13; i < len; ++ i) suf[n + 1][i - len + 13] = tmp[i];
			}
		}
		else if(strlen(suf[a]) < 13){
			strcpy(suf[n + 1], suf[b]);
			strcpy(tmp, pre[a]); strcat(tmp, pre[b]);
			for(int i = 0; i < 13; ++ i) pre[n + 1][i] = tmp[i];
		}
		else if(strlen(suf[b]) < 13){
			strcpy(pre[n + 1], pre[a]);
			strcpy(tmp, suf[a]); strcat(tmp, suf[b]);
			for(int i = len - 13; i < len; ++ i) suf[n + 1][i - len + 13] = tmp[i];
		}
		else{
			strcpy(pre[n + 1], pre[a]); strcpy(suf[n + 1], suf[b]);
		}
		++ n;
	}
		
	return 0;
}