#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<string>
#include<ctime>
#include<cmath>
#include<utility>
#include<set>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
#define INF 1111111111
#define N 11111111
#define eps 1e-9
using namespace std;
typedef long long LL;
int getint()
{
	char ch;
	do
	{
		ch=getchar();
	}while (ch!='-'&&(ch<'0'||ch>'9'));
	int ans=0,f=0;
	if (ch=='-') f=1; else ans=ch-'0';
	while (isdigit(ch=getchar())) ans=ans*10+ch-'0';
	if (f) ans*=-1;
	return ans;
}
int prime[N],cnt[N],ans[N];
bool flag[N];
int n,m,tot,tmax; 
void getpri()
{
	for (int i=2;i<=tmax;i++)
	{
		if (!flag[i])
			prime[++tot]=i;
		for (int j=1;j<=tot;j++)
		{
			if (i*prime[j]>tmax) break;
			flag[i*prime[j]]=true;
			if (i%prime[j]==0) break;
		}
	}
	return ;
}
int main()
{
	n=getint(); 
	for (int i=1;i<=n;i++)
	{
		int t=getint();
		tmax=max(t,tmax);
		cnt[t]++;
	}
	getpri();
	for (int i=1;i<=tot;i++)
	for (int j=prime[i];j<=tmax;j+=prime[i])
	ans[i]+=cnt[j];
	for (int i=1;i<=tot;i++) ans[i]+=ans[i-1];
	m=getint();
	for (int i=1;i<=m;i++)
	{
		int L=getint(),R=getint();
		int l=1,r=tot,ll=tot+1,rr=-1;
		while (l<r)
		{
			int mid=(l+r)>>1;
			if (prime[mid]<L) l=mid+1;
			else r=mid;
		}
		if (L<=prime[l]) ll=l;
		l=1,r=tot;
		while (l<r)
		{
			int mid=(l+r)>>1;
			if (l==mid) mid++;
			if (prime[mid]>R) r=mid-1;
			else l=mid;
		}
		if (R>=prime[l]) rr=l;
		if (ll>rr) printf("0\n");
		else printf("%d\n",ans[rr]-ans[ll-1]);
//		if (i%1000==0) printf("%d\n",i/1000);
	}
	return 0;
}
