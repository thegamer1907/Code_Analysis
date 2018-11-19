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
int n,m;
char s[205];
char ssl[205][205],ssr[205][205];
int ll[205],lr[205];
bool ok[205][17][65536];
int vis[205][17];
int lim=16;
long long t;
int main()
{
	n=read();
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s+1);
		int temp;
		int l=strlen(s+1);
		for(int j=1;j<=lim&&j<=l;j++)
		{
			ssl[i][++ll[i]]=s[j];
		}
		for(int j=max(1,l-lim+1);j<=l;j++)
		{
			ssr[i][++lr[i]]=s[j];
		}
		for(int j=1;j<=lim;j++)
		{
			vis[i][j]=1<<j;
		}
		for(int j=1;j<=lim&&j<=l;j++)
		{
			temp=0;
			for(int k=1;k<j;k++)
			{
				temp<<=1;
				temp|=s[k]-'0';
			}
			for(int k=j;k<=l;k++)
			{
				temp<<=1;
				temp|=s[k]-'0';
				temp&=(1<<j)-1;
				if(!ok[i][j][temp])
				{
					vis[i][j]--;
				}
				ok[i][j][temp]=1;
			}
		}
	}
	m=read();
	while(m--)
	{
		n++;
		int x=read(),y=read();
		for(int i=1;i<=ll[x];i++)
		{
			s[i]=ssl[x][i];
		}
		for(int i=1;i<=ll[y];i++)
		{
			s[ll[x]+i]=ssl[y][i];
		}
		for(int i=1;i<=ll[x]+ll[y]&&i<=lim;i++)
		{
			ssl[n][++ll[n]]=s[i];
		}
		int temp=0;
		for(int i=lr[y];i;i--)
		{
			s[++temp]=ssr[y][i];
		}
		for(int i=lr[x];i;i--)
		{
			s[++temp]=ssr[x][i];
		}
		for(int i=1;i<=lr[x]+lr[y]&&i<=lim;i++)
		{
			ssr[n][++lr[n]]=s[i];
		}
		for(int i=1;i<=(lr[n]>>1);i++)
		{
			swap(ssr[n][i],ssr[n][lr[n]-i+1]);
		}
		for(int i=1;i<=lr[x];i++)
		{
			s[i]=ssr[x][i];
		}
		for(int i=1;i<=ll[y];i++)
		{
			s[lr[x]+i]=ssl[y][i];
		}
		
		for(int k=1;k<=lim;k++)
		{
			vis[n][k]=1<<k;
			for(int j=0;j<(1<<k);j++)
			{
				t++;
				ok[n][k][j]=ok[x][k][j]|ok[y][k][j];
				if(ok[n][k][j])
				{
					vis[n][k]--;
				}
			}
			if(k<=lr[x]+ll[y])
			{
				int temp=0;
				for(int j=1;j<k;j++)
				{
					temp<<=1;
					temp|=s[j]-'0';
				}
				for(int j=k;j<=lr[x]+ll[y];j++)
				{
					t++;
					temp<<=1;
					temp|=s[j]-'0';
					temp&=(1<<k)-1;
					if(!ok[n][k][temp])
					{
						vis[n][k]--;
					}
					ok[n][k][temp]=1;
				}
			}
		}
		int ans=0;
		for(int i=1;i<=lim;i++)
		{
			if(!vis[n][i])
			ans=i;
		}
		printf("%d\n",ans);
	}
}
