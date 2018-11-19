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

const int maxn=30;

int n,st,en,vst[maxn],ven[maxn];

void init()
{
	char a,b;
	cin>>a>>b;
	st=a-'a';
	en=b-'a';
	n=read();
	REP(i,1,n)
	{
		cin>>a>>b;
		if(a-'a'==st && b-'a'==en)
		{
			printf("YES\n");
			exit(0);
		}
		vst[a-'a']++;
		ven[b-'a']++;
	}
	if(ven[st] && vst[en])
	{
		printf("YES\n");
	}else
	{
		printf("NO\n");
	}
}

int main()
{
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	init();
	return 0;
}

