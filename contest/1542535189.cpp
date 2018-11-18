#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[101010];
long long cnt[101010];
long long curans=0;
int curL=1,curR;
long long f[101010],g[101010];
void move(int targetL,int targetR)
{
	while(curR<targetR)
		curans+=cnt[a[++curR]]++;
	while(curL>targetL)
		curans+=cnt[a[--curL]]++;
	while(curR>targetR)
		curans-=--cnt[a[curR--]];
	while(curL<targetL)
		curans-=--cnt[a[curL++]];
}
void solve(int k,int l,int r,int L,int R)//calculate answer of f[l-r][k] within breakpoint from L-R
{
	if(l>r)
		return;
	int mid=(l+r)>>1;
	int optimal;
	long long save=(1LL<<60);
	int top=min(mid,R);
	move(top+1,mid);
	for(int i=top;i>=L;i--)
	{
		curans+=cnt[a[--curL]]++;
		if(f[i-1]+curans<=save)
		{
			save=f[i-1]+curans;
			optimal=i;
		}
	}
	g[mid]=save;
	solve(k,l,mid-1,L,optimal);
	solve(k,mid+1,r,optimal,R);
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	memset(f,0x3f,sizeof(f));
	f[0]=0;
	for(int i=1;i<=m;i++)
	{
		memset(cnt,0,sizeof(cnt));
		curL=1;
		curR=curans=0;
		solve(i,1,n,1,n);
		memcpy(f,g,sizeof(f));
	}
	printf("%I64d\n",f[n]);
	return 0;
}
