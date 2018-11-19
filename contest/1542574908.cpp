#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int read()
{
	char ch=getchar();int f=0;
	while(ch<'0'||ch>'9')ch=getchar();
	while(ch>='0'&&ch<='9'){f=(f<<1)+(f<<3)+ch-'0';ch=getchar();}
	return f;
}
int a[100005][7],n,k;
int s[7];bool ok=0;
void dfs(int x)
{
	for(int i=0;i<=1;i++)
	{
		s[x]=i;
		if(x!=k)
		dfs(x+1);
		else
		{
			bool ac=0;
			for(int i=1;i<=n;i++)
			{
				bool ak=1;
				for(int j=1;j<=k;j++)
				{
					if(a[i][j]!=s[j])
					{
						ak=0;
						break;
					}
				}
				if(ak)
				{
					ac=1;
					break;
				}
			}
			if(ac)
			{
				ac=0;
				for(int i=1;i<=n;i++)
				{
					bool ak=1;
					for(int j=1;j<=k;j++)
					{
						if(s[j]==1&&a[i][j])
						{
							ak=0;
							break;
						}
					}
					if(ak)
					{
						ok=1;
						return;
					}
				}
			}
		}
		if(ok)
		return;
	}
}
int main()
{
	n=read(),k=read();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			a[i][j]=read();
		}
	}
	dfs(1);
	if(ok)
	printf("YES");
	else printf("NO");
}