#include<bits/stdc++.h> 
using namespace std;
int n,m;
char a[505][505];
int dp[505][505];
int Q,sx,sy,tx,ty;
int main(){
	scanf("%d%d",&n,&m);
	memset(a,'#',sizeof(a));
	for (int i=1;i<=n;i++){
		scanf("%s",a[i] + 1);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + 
					 ((a[i-1][j] == '.') && (a[i][j] == '.')) + 
					 ((a[i][j-1] == '.') && (a[i][j] == '.'));
 		}
	}
	scanf("%d",&Q);
	while (Q--){
		scanf("%d%d%d%d",&sx,&sy,&tx,&ty);
		int Ans = dp[tx][ty] - dp[sx-1][ty] - dp[tx][sy-1] + dp[sx-1][sy-1];
		for (int i=sx;i<=tx;i++)
			if ((a[i][sy-1] == '.') && (a[i][sy] == '.')) Ans--;
		for (int i=sy;i<=ty;i++)
			if ((a[sx-1][i] == '.') && (a[sx][i] == '.')) Ans--;
		printf("%d\n",Ans);
	}
}
