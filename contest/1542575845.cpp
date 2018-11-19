#include<bits/stdc++.h>
using namespace std;
int a[2][2][2][2];
struct node{
	int x,y,z,w,val;
}p[20];
int g[5];
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
	if(a[0][0][0][0]) {
		puts("YES");
		return 0;
	}
	int cnt=0;
	for(int x=0;x<2;x++)
	for(int y=0;y<2;y++)
	for(int z=0;z<2;z++)
	for(int w=0;w<2;w++)
	if(a[x][y][z][w])
	{
		p[++cnt].val=a[x][y][z][w];
		p[cnt].x=x;p[cnt].w=w;p[cnt].y=y;p[cnt].z=z;
	}
	int flag=0;
	for(int i=1;i<=cnt;i++)
	for(int j=1;j<=cnt;j++)
	if(p[i].x+p[j].x<=1&&p[i].y+p[j].y<=1&&p[i].w+p[j].w<=1&&p[i].z+p[j].z<=1)
	flag=1;
	if(flag)puts("YES");
	else puts("NO");
	return 0;
}