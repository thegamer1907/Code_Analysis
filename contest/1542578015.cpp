#include<bits/stdc++.h>
#define LL long long
#define PII pair<int, int>
#define MP make_pair
#define PB push_back
#define F first
#define S second
using namespace std;
const int MAXN = 202;
const int INF = 0x3f3f3f3f;
int n, m, ans;
char s[MAXN][MAXN];
int len[MAXN];
set<int> st[MAXN][11];
set<int> :: iterator it;
int pre[MAXN][11], suf[MAXN][11];
int main(){
	//freopen("in.txt", "r", stdin);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%s", s[i]);
		len[i] = strlen(s[i]);
		for(int j = 0; j < min(10, len[i]); j++){
			pre[i][j] = s[i][j] - 48;
		}
		for(int j = 0; j < min(10, len[i]); j++){
			suf[i][j] = s[i][len[i] - j - 1] - 48;
		}
		for(int j = 1; j <= 10 && j <= len[i]; j++){
			int tmp = 0;
			for(int k = 0; k < j - 1; k++) tmp = tmp * 2 + s[i][k] - 48;
			for(int k = j - 1; k < len[i]; k++){
				tmp = (tmp * 2 + s[i][k] - 48) & ((1 << j) - 1);
				st[i][j].insert(tmp);
			}
		}
	}
	scanf("%d", &m);
	while(m--){
		n++;
		int x, y;
		scanf("%d%d", &x, &y);
		len[n] = min(len[x] + len[y], INF);
		
		for(int i = 0; i < min(10, len[x]); i++) pre[n][i] = pre[x][i];
		for(int i = min(10, len[x]); i < 10 && i < len[n]; i++) pre[n][i] = pre[y][i - len[x]];
		
		for(int i = 0; i < min(10, len[y]); i++) suf[n][i] = suf[y][i];
		for(int i = min(10, len[y]); i < 10 && i < len[n]; i++) suf[n][i] = suf[x][i - len[y]];
		
		for(int i = 1; i <= 10; i++){
			for(it = st[x][i].begin(); it != st[x][i].end(); ++it){
				st[n][i].insert(*it);
			}
			for(it = st[y][i].begin(); it != st[y][i].end(); ++it){
				st[n][i].insert(*it);
			}
		}
		for(int i = 1; i <= min(10, len[x]); i++){
			for(int j = 1; j <= min(10, len[y]); j++) if(i + j <= 10){
				int tmp = 0;
				for(int k = i - 1; k >= 0; k--){
					tmp = tmp * 2 + suf[x][k];
				}
				for(int k = 0; k < j; k++){
					tmp = tmp * 2 + pre[y][k];
				}
				st[n][i + j].insert(tmp);
			}
		}
		ans = 0;
		for(int i = 10; i; i--)
		if(st[n][i].size() == (unsigned)(1 << i)){
			ans = i;
			break;
		}
		printf("%d\n", ans);
		
		/*for(int i = 1; i <= 10; i++){
			printf("%d ", st[n][i].size());
		}
		printf("\n");*/
	}
	return 0;
}