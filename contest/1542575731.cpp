#include<bits/stdc++.h>
using namespace std;
int a[2][2][2][2];
struct node{
	int x,y,z,w,val;
}p[20];
int cnt;
int flag=0;
void dfs(int k,int sum,int xx,int yy,int zz,int ww)
{
	if(flag) return ;
	if(sum)
	{
		if(xx*2<=sum&&yy*2<=sum&&zz*2<=sum&&ww*2<=sum)
		flag=1;
	}
	for(int i=k+1;i<=cnt;i++)
	{
		dfs(i,sum+1,xx+p[i].x,yy+p[i].y,zz+p[i].z,ww+p[i].w);
	}
}
int g[6];
int main()
{
	int n,k;
//	freopen("in.txt","r",stdin);
	scanf("%d%d",&n,&k);
	int x,y,z,w;
	memset(a,0,sizeof a);
	for(int i=1;i<=n;i++)
	{
		memset(g,0,sizeof g);
		for(int j=1;j<=k;j++)
		scanf("%d",&g[j]);
		a[g[1]][g[2]][g[3]][g[4]]++;
	}
	cnt=0;
	for(int x=0;x<2;x++)
	for(int y=0;y<2;y++)
	for(int z=0;z<2;z++)
	for(int w=0;w<2;w++)
	if(a[x][y][z][w])
	{
		p[++cnt].val=a[x][y][z][w];
		p[cnt].x=x;p[cnt].w=w;p[cnt].y=y;p[cnt].z=z;
	}
	dfs(0,0,0,0,0,0);
	if(flag)puts("YES");
	else puts("NO");
	return 0;
}