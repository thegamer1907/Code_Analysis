#include <bits/stdc++.h>
#define MAXN 200005
#define MAXM 140005
#define mp std::make_pair
#define fr first
#define sc second
#define ll long long
#define res register ll
#define lc pos<<1
#define rc pos<<1|1
#define INF 1000000007
using namespace std;

inline int read()
{
	int ch=getchar(),f=0;
	int x=0;
	while(ch<'0'||ch>'9')
	{
		f|=ch=='-';
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		x=x*10+ch-'0';
		ch=getchar();
	}
	return f?-x:x;
}
int n,m;
int cnt[MAXN],a[MAXN];
ll f[MAXN],g[MAXN],ans;
inline void solve(int l,int r,int nl,int nr,ll ans)
{
	if(l>r)
	return;
	int mid=l+r>>1,k=nl;
	for(int i=l;i<=mid;i++)
	ans+=cnt[a[i]]++;
	for(int i=nl;i<=min(mid,nr);i++)
	ans-=--cnt[a[i]],g[mid]>f[i]+ans?g[mid]=f[i]+ans,k=i:0;
	for(int i=min(mid,nr);i>=nl;i--)
	ans+=cnt[a[i]]++;
	for(int i=mid;i>=l;i--)
	ans-=--cnt[a[i]];
	solve(l,mid-1,nl,k,ans);
	for(int i=l;i<=mid;i++)
	ans+=cnt[a[i]]++;
	for(int i=nl;i<k;i++)
	ans-=--cnt[a[i]];
	solve(mid+1,r,k,nr,ans);
	for(int i=k-1;i>=nl;i--)
	ans+=cnt[a[i]]++;
	for(int i=mid;i>=l;i--)
	ans-=--cnt[a[i]];
}
int main()
{
	n=read(),m=read();
	for(int i=1;i<=n;i++)
	a[i]=read();
	for(int i=1;i<=n;i++)
	ans+=cnt[a[i]]++,f[i]=ans;
	ans=0;
	memset(cnt,0,sizeof cnt);
	while(--m)
	{
		memset(g,127,sizeof g);
		solve(1,n,1,n,0);
		swap(f,g);
	}
	printf("%lld\n",f[n]);
}