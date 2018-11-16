//author: dxm
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e9
#define rep(i,n) for(int (i)=0;(i)<n;i++)
#define REP(i,n) for(int (i)=1;(i)<=n;i++)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
inline void Fail(){
	printf("0");
	exit(0);
}

const int maxn=505;
int n,m,q;
char grid[maxn][maxn];
int row[maxn][maxn],col[maxn][maxn];

int main(){
	scanf("%d%d",&n,&m);
	rep(i,n)scanf("%s",grid[i]);
	rep(i,n){
		REP(j,m-1)if(grid[i][j]=='.'&&grid[i][j-1]=='.')row[i][j]=row[i][j-1]+1;
		else row[i][j]=row[i][j-1];//cout<<i<<" "<<j<<" "<<row[i][j]<<endl;
	}
	rep(i,m){
		REP(j,n-1)if(grid[j][i]=='.'&&grid[j-1][i]=='.')col[j][i]=col[j-1][i]+1;
		else col[j][i]=col[j-1][i];
	}
	scanf("%d",&q);
	while(q--){
		int r1,c1,r2,c2;
		scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
		r1--;c1--;r2--;c2--;
		int ans=0;
		for(int i=r1;i<=r2;i++)ans+=row[i][c2]-row[i][c1];
		for(int i=c1;i<=c2;i++)ans+=col[r2][i]-col[r1][i];
		printf("%d\n",ans);
	}
	return 0;
}

/*
Input:
-----------------
Output:
*/
