#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MN 10000
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
char s[205][MN+5],S[205][MN+5];
int n,m,l[205];
set<long long> st[205][62];

int main()
{
	n=read();
	for(int i=1;i<=n;++i)
	{
		scanf("%s",s[i]+1);int len=strlen(s[i]+1);
		for(int j=1;j<=len;++j)
		{
			long long x=0;
			for(int k=j;k<=min(len,j+59);++k)
				st[i][k-j+1].insert(x=x*2+s[i][k]-'0');
		}
		for(int j=1,k=len;j<=min(len,60);++j) S[i][j]=s[i][k--];
		l[i]=len;
	}
	m=read();
	for(int j=1;j<=m;++j)
	{
		int x=read(),y=read(),z=n+j;
		l[z]=min((int)1e9,l[x]+l[y]);
		for(int i=1;i<=60;++i)
		{ 
			for(set<long long>::iterator it=st[x][i].begin();it!=st[x][i].end();it++) st[z][i].insert(*it);
			for(set<long long>::iterator it=st[y][i].begin();it!=st[y][i].end();it++) st[z][i].insert(*it);
		} 
		for(int i=1;i<=min(60,l[x]);++i) s[z][i]=s[x][i];
		for(int i=l[x]+1;i<=min(60,l[z]);++i) s[z][i]=s[y][i-l[x]];
		for(int i=1;i<=min(60,l[y]);++i) S[z][i]=S[y][i];
		for(int i=l[y]+1;i<=min(60,l[z]);++i) S[z][i]=S[x][i-l[y]];
		long long X=0;
		for(int i=1;i<=min(60,l[x]);++i) 
		{ 
			X+=(1LL<<i-1)*(S[x][i]-'0');
			long long Y=X;
			for(int j=1;j<=min(60,l[y])&&i+j<=60;++j)
			{
				Y=Y*2+s[y][j]-'0';
				st[z][j+i].insert(Y);	
			}
		}
		for(int i=60;~i;--i) if(st[z][i].size()==(i==0?0:(1LL<<i))) {printf("%d\n",i);break;} 
	}
	return 0;
}

