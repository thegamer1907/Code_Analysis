#include<bits/stdc++.h>
using namespace std;
int f[2][2][2][2],n,k,a[5],u[5],v[5],flag;
void dfs(int x)
{
	if (x==5)
	{
		if (f[u[1]][u[2]][u[3]][u[4]]&&f[v[1]][v[2]][v[3]][v[4]]) flag=1;
		return;
	}
	for (int i=0;i<=1;i++)
	for (int j=0;j<=1;j++)
		if (i+j!=2)
		{
			u[x]=i;v[x]=j;
			dfs(x+1);
		}
}

	
int main()
{
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=4;j++)
		{
			if (j<=k)scanf("%d",&a[j]);
			else a[j]=0;
		}
		f[a[1]][a[2]][a[3]][a[4]]=1;
	}
	dfs(1);
	puts(flag?"YES":"NO");
}