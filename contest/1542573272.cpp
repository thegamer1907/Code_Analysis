#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n,k;
int u,v,w,x;
int a[100005];
int b[5];
int o(bool t)
{
	if(t)printf("YES\n");
	else printf("NO\n");
}
bool vis[17];
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		b[0]=0;
		for(int j=k;j>=1;j--)
		{
			cin>>b[j];
			if(b[j]==1)b[0]+=(1<<(j-1));
		}
		vis[b[0]]=1;
	}
	for(int i=0;i<(1<<k);i++)
	{
		if(vis[0])
		{
			o(1);return 0;
		}
		if(vis[i])
		{
			int s=i^((1<<k)-1);
			for(int j=0;j<(1<<k);j++)
			{
				if(j!=i&&vis[j]&&((j|s)&i)==0){o(1);return 0;}
			}
		}
	}
	o(0);
	return 0;
} 