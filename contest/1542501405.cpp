#include<stdio.h>
#include<string.h>
char s[205][30];
int len[256];
char t[128];
bool ans[205][15][1024];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",t);
		int l=strlen(t);
		int now=0;
		for(int j=0;j<l;j++)
		{
			now<<=1;
			if(t[j]-'0')
			{
				now++;
			}
			for(int k=1;k<=10;k++)
			{
				if(j>=k-1)
				{
					ans[i][k][now&((1<<k)-1)]=true;
				}
			}
		}
		if(l<=20)
		{
			len[i]=l;
			for(int j=0;j<l;j++)
			{
				s[i][j]=t[j];
			}
		}
		else
		{
			len[i]=20;
			for(int j=0;j<10;j++)
			{
				s[i][j]=t[j];
			}
			for(int j=0;j<10;j++)
			{
				s[i][19-j]=t[l-j-1];
			}
		}
	}
	int m;
	scanf("%d",&m);
	m+=n;
	for(int i=n+1;i<=m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		for(int j=1;j<=10;j++)
		{
			for(int k=0;k<(1<<j);k++)
			{
				ans[i][j][k]=ans[u][j][k]||ans[v][j][k];
			}
		}
		for(int j=0;j<len[u];j++)
		{
			t[j]=s[u][j];
		}
		for(int j=0;j<len[v];j++)
		{
			t[j+len[u]]=s[v][j];
		}
		int l=len[u]+len[v];
		int now=0;
		for(int j=0;j<l;j++)
		{
			now<<=1;
			if(t[j]-'0')
			{
				now++;
			}
			if(j<len[u])
			{
				continue;
			}
			for(int k=1;k<=10;k++)
			{
				if(j>=k+len[u]-1)
				{
					continue;
				}
				if(j>=k-1)
				{
					ans[i][k][now&((1<<k)-1)]=true;
				}
			}
		}
		if(l<=20)
		{
			len[i]=l;
			for(int j=0;j<l;j++)
			{
				s[i][j]=t[j];
			}
		}
		else
		{
			len[i]=20;
			for(int j=0;j<10;j++)
			{
				s[i][j]=t[j];
			}
			for(int j=0;j<10;j++)
			{
				s[i][19-j]=t[l-j-1];
			}
		}
		int answer=0;
		for(int j=1;j<=10;j++)
		{
			bool ok=true;
			for(int k=0;k<(1<<j);k++)
			{
				if(!ans[i][j][k])
				{
					ok=false;
					break;
				}
			}
			if(!ok)
			{
				break;
			}
			answer=j;
		}
		printf("%d\n",answer);
	}
	return 0;
}