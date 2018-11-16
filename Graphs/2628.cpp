#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long ll;
int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0' || ch>'9')
	{
		if(ch=='-')	f=-1;
		ch=getchar();
	}
	while(ch>='0' && ch<='9')
	{
		x=10*x+ch-'0';
		ch=getchar();
	}
	return x*f;
}
const int Size=10005;
int father[Size];
int n,p[Size];
int Find(int x)
{
	if(x==father[x])	return x;
	return father[x]=Find(father[x]);
}
void Union(int x,int y)
{
	int fx=Find(x);
	int fy=Find(y);
	father[fx]=fy;
}
void init()
{
	n=read();
	for(int i=1; i<=n; i++)
	{
		father[i]=i;
	}
	for(int i=1; i<=n; i++)
	{
		p[i]=read();
		Union(i,p[i]);
	}
}
bool vis[Size];
int main()
{
//	freopen("data.txt","r",stdin);
	init();
	int ans=0;
	for(int i=1; i<=n; i++)
	{
		vis[Find(i)]=true;
	}
	for(int i=1; i<=n; i++)
	{
		if(vis[i])
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}