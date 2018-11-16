#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

const int MAXN=510;

char a[MAXN][MAXN];
int n,m,t,c[MAXN][MAXN];
int n1,n2,m1,m2;
int go[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int sum[MAXN][MAXN],s[MAXN][MAXN];

void premake()
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			for(int k=0;k<4;k++)
			{
				int tx=i+go[k][0];
				int ty=j+go[k][1];
				if(tx<1 || tx>n || ty<1 || ty>m) continue;
				if(a[i][j]=='.' && a[tx][ty]=='.') c[i][j]++;
			}
					
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			sum[i][j]=sum[i][j-1]+c[i][j];
	for(int j=1;j<=m;j++)
		for(int i=1;i<=n;i++)
		{
			s[i][j]=s[i-1][j]+sum[i][j];
		//	printf("s[%d][%d]=%d\n",i,j,s[i][j]);
		}
}

void solve()
{
	int ans=0;
	scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
	ans+=s[n2][m2]-s[n1-1][m2];
	int minus=s[n2][m1-1]-s[n1-1][m1-1];
	ans-=minus;
	for(int i=m1;i<=m2;i++)
	{
		if(n1-1>=1 && a[n1][i]=='.' && a[n1-1][i]=='.') ans--;
		if(n2+1<=n && a[n2][i]=='.' && a[n2+1][i]=='.') ans--;
	}
	for(int i=n1;i<=n2;i++)
	{
		if(m1-1>=1 && a[i][m1]=='.' && a[i][m1-1]=='.') ans--;
		if(m2+1<=m && a[i][m2]=='.' && a[i][m2+1]=='.') ans--;
	}
	ans/=2;
	cout<<ans<<endl;
}

int main()
{
//	freopen("input","r",stdin);
	scanf("%d %d\n",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			scanf("%c",&a[i][j]);
		scanf("\n");
	}
	premake();
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		solve();
	return 0;
}