#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define FOR(i, a, b) for (int i = a; i < int(b); i++)
#define FOREACH(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define SIZE(v) ((int)(v).size())
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define ll long long
#define pii pair<int, int>

const int MAX = 550;

char board[MAX][MAX];
int accU[MAX][MAX], accL[MAX][MAX];

int main(){
	int h, w; scanf("%d %d", &h, &w);
	for(int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++)
			scanf(" %c", &board[i][j]);
	for(int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++){
			accU[i][j] = accU[i][j - 1] + accU[i - 1][j] - accU[i - 1][j - 1];
			accL[i][j] = accL[i][j - 1] + accL[i - 1][j] - accL[i - 1][j - 1];
			if(board[i][j] == '.' && board[i - 1][j] == '.') accU[i][j]++;
			if(board[i][j] == '.' && board[i][j - 1] == '.') accL[i][j]++;
		}
	/*for(int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++)
			printf("%d%c", accU[i][j], j == w ? '\n' : ' ');
	printf("\n");
	for(int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++)
			printf("%d%c", accL[i][j], j == w ? '\n' : ' ');*/
	int r1, c1, r2, c2;
	int q; scanf("%d", &q);
	REP(Q, q){
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		int ans = 0;
		r1--;
		ans += accL[r2][c2] - accL[r1][c2] - accL[r2][c1] + accL[r1][c1];
		r1++;
		c1--;
		ans += accU[r2][c2] - accU[r1][c2] - accU[r2][c1] + accU[r1][c1];
		c1++;
		printf("%d\n", ans);
	}
}