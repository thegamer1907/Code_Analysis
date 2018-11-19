#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<set>
#include<map>
using namespace std;
#define ll long long
#define REP(i,a,b) for(int i=(a),_end_=(b);i<=_end_;i++)
#define DREP(i,a,b) for(int i=(a),_end_=(b);i>=_end_;i--)
#define EREP(i,a) for(int i=start[(a)];i;i=e[i].next)
inline int read()
{
	int sum=0,p=1;char ch=getchar();
	while(!(('0'<=ch && ch<='9') || ch=='-'))ch=getchar();
	if(ch=='-')p=-1,ch=getchar();
	while('0'<=ch && ch<='9')sum=sum*10+ch-48,ch=getchar();
	return sum*p;
}

int n,vis[16],k;

void init()
{
	n=read();k=read();
	REP(i,1,n)
	{
		int s=0;
		REP(j,0,k-1)s+=read()<<j;
		vis[s]=1;
	}
}

inline void dfs(int p,int s,int s1,int s2,int s3,int s4)
{
	if(p>=(1<<k))
	{
		if(s && s1<=s/2 && s2<=s/2 && s3<=s/2 && s4<=s/2)
		{
			printf("YES\n");
			exit(0);
		}
		return;
	}
	dfs(p+1,s,s1,s2,s3,s4);
	if(vis[p])
	{
		dfs(p+1,s+1,s1+(p & 1),s2+((p & 2)>0),s3+((p & 4)>0),s4+((p & 8)>0));
	}
}

void doing()
{
	dfs(0,0,0,0,0,0);
	printf("NO\n");
}

int main()
{
//	freopen("input.in","r",stdin);
//	freopen("output.out","w",stdout);
	init();
	doing();
	return 0;
}

