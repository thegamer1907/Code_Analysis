#include <bits/stdc++.h>
using namespace std;

int n,m;
string s[105],b[205],e[205];
int a[205][11][1<<10],fl[205];

inline void init()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>s[i];
		int len=s[i].size();
		for(int j=1;j<=10;++j)
			for(int k=0;k+j-1<len;++k)
			{
				int x=0;
				for(int t=0;t<j;++t)
				{
					x<<=1;
					x|=s[i][k+t]=='1';
				}
				a[i][j][x]=1;
			}
		if(len<=20)
		{
			b[i]=e[i]=s[i];
			fl[i]=1;
		}
		else
		{
			b[i]=s[i].substr(0,20);
			e[i]=s[i].substr(len-20);
		}
	}
}

inline void solve()
{
	cin>>m;
	string str;
	for(int id=n+1;id<=n+m;++id)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		for(int i=1;i<=10;++i)
			for(int j=0;j<(1<<i);++j)
				a[id][i][j]=a[x][i][j]|a[y][i][j];
		str=e[x]+b[y];
		int len=str.size();
		for(int i=1;i<=10;++i)
			for(int j=0;j+i-1<len;++j)
			{
				int x=0;
				for(int k=0;k<i;++k)
				{
					x<<=1;
					x|=str[j+k]=='1';
				}
				a[id][i][x]=1;
			}
		
		if(fl[x])
		{
			if(len>20)b[id]=str.substr(0,20);
			else b[id]=str;
		}
		else b[id]=b[x];
		
		if(fl[y])
		{
			if(len>20)e[id]=str.substr(len-20);
			else e[id]=str;
		}
		else e[id]=e[y];
		
		if(fl[x]&&fl[y]&&len<20)fl[id]=1;
		
		int found=0;
		for(int i=10;i;--i)
		{
			int flag=1,t=1<<i;
			for(int j=0;j<t;++j)
				if(!a[id][i][j]){flag=0;break;}
			if(flag)
			{
				printf("%d\n",i);
				found=1;
				break;
			}
		}
		if(!found)puts("0");
	}
}

int main()
{
	init();
	solve();
	return 0;
}