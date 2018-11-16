#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

typedef pair<int,int> pii;
const int MAX=505;
const int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};

int n,m,k;
char a[MAX][MAX];

int sx,sy;
bool vis[MAX][MAX];
vector<pii> order;

inline void dfs(int x,int y)
{
	vis[x][y]=true;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(nx<1 || nx>n || ny<1 || ny>m)
			continue;
		if(a[nx][ny]=='.' && !vis[nx][ny])
			dfs(nx,ny);
	}
	
	order.push_back(make_pair(x,y));
}

int main()
{
//	freopen("input.txt","r",stdin);
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			a[i][j]=getchar();
			while(a[i][j]==' ' || a[i][j]=='\n')
				a[i][j]=getchar();
			
			if(a[i][j]=='.')
				sx=i,sy=j;
		}
	
	dfs(sx,sy);
	
	for(int i=0;i<k;i++)
	{
		int x=order[i].first,y=order[i].second;
		a[x][y]='X';
	}
	
	for(int i=1;i<=n;i++,putchar('\n'))
		for(int j=1;j<=m;j++)
			putchar(a[i][j]);
	return 0;
}
