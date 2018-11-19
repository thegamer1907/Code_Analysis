#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;
const int MAXN = 210;
char str[MAXN][MAXN], pre[MAXN][MAXN], suf[MAXN][MAXN];
bool exist[MAXN][1<<14]; 
void makepre (char * A, char * B, int len) {
	int i;
	for(i = 0; A[i] != '\0' && i < len; i++)
		B[i] = A[i];
	B[i] = '\0';
}
void makesuf (char * A, char * B, int len) {
	int lenA = strlen(A);
	int cnt = 0;
	for(int i = lenA-1; i>=0 && cnt < len; i--, cnt++)
		B[cnt] = A[i];
	reverse(B, B+cnt);
	B[cnt] = '\0';
}
const int MAXK = 14;
char tmp[1000];
void cover (char * str, int i) {
	int len = strlen(str);
	int sum = 0;
	for(int l = 1; l<MAXK; l++) {
		for(int p = 0; p<=len-l; p++) {
			int t = 0;
			for(int x = 0; x<l; x++)
				t = (t<<1)+str[p+x]-'0';
			exist[i][sum+t] = true;
		}
		sum += (1<<l);
	}
}
int main () {
	int N;
	scanf("%d", &N);
	for(int i = 1; i<=N; i++) {
		scanf("%s", str[i]), makepre(str[i], pre[i], MAXK), makesuf(str[i], suf[i], MAXK);
		cover(str[i], i);
	}
	int M;
	scanf("%d", &M);
	for(int q = 1; q<=M; q++) {
		int a, b, u = N+q;
		scanf("%d%d", &a, &b);
		int lprea, rsufb;
		if((lprea = strlen(pre[a])) < MAXK) {
			memcpy(pre[u], pre[a], sizeof pre[a]);
			strcat(pre[u], pre[b]);
			pre[u][MAXK] = '\0';
		} else memcpy(pre[u], pre[a], sizeof pre[a]);
		if((rsufb = strlen(suf[b])) < MAXK) {
			memcpy(suf[u], suf[a], sizeof suf[a]);
			strcat(suf[u], suf[b]);
			reverse(suf[u], suf[u]+strlen(suf[u]));
			suf[u][MAXK] = '\0';
			reverse(suf[u], suf[u]+strlen(suf[u]));
		} else memcpy(suf[u], suf[b], sizeof suf[b]);
		//printf("npre:%s, nsuf:%s\n", pre[u], suf[u]);
		memcpy(tmp, suf[a], sizeof suf[a]);
		strcat(tmp, pre[b]);
		for(int i = 0; i<(1<<MAXK); i++)
			exist[u][i] = exist[a][i] || exist[b][i];
		cover(tmp, u);
		int top = 0;
		for(; exist[u][top]; top++) ;
		int ans = 0, sum = 0;
		//printf("top:%d\n", top);
		while(sum <= top) sum += 1<<(++ans);
		//TODO
		printf("%d\n", ans-1);
	}
}
/*
5
01
10
101
11111
0
3
1 2
6 5
4 4

2
0
1 
10
1 1
1 2
2 3
2 4
4 4
4 2
3 1
3 3
3 5
5 6

*/

