#include<bits/stdc++.h>
#define debug(x) cout<<#x<<"="<<x<<endl
typedef long long ll;
using namespace std;
const int N = 100009, M = 21;

int a[N],cnt[N];
ll f[M][N];
int n,m;

inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}

void solve(int step,int l,int r,int L,int R,ll sum)
{
	if(l>r) return ;
//	printf("%d-%d %d-%d %lld\n",l,r,L,R,sum);
	int mid=(l+r)>>1,p=min(R,mid),Mid=L;
	for(int i=l;i<=mid;i++) sum+=cnt[a[i]]++;
	for(int i=L;i<=p;i++)
	{
		sum-=--cnt[a[i]];
		if(f[step-1][i]+sum<f[step][mid]) f[step][mid]=f[step-1][i]+sum,Mid=i;
	}
	for(int i=l;i<=mid;i++) sum-=--cnt[a[i]];
	for(int i=L;i<=p;i++) sum+=cnt[a[i]]++;
	solve(step,l,mid-1,L,Mid,sum);
	for(int i=L;i<Mid;i++) sum-=--cnt[a[i]];
	for(int i=l;i<=mid;i++) sum+=cnt[a[i]]++;
	solve(step,mid+1,r,Mid,R,sum);
	for(int i=L;i<Mid;i++) cnt[a[i]]++;
	for(int i=l;i<=mid;i++) --cnt[a[i]];
}

int main()
{
	n=read();m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=1;i<=n;i++) f[1][i]=f[1][i-1]+(cnt[a[i]]++);
	for(int i=2;i<=m;i++)
	{
		memset(cnt,0,sizeof cnt);
		memset(f[i],63,sizeof f[i]);
		solve(i,1,n,1,n,0);
	}
	cout<<f[m][n]<<endl;
	return 0;
}
