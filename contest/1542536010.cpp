#include<bits/stdc++.h>
#define debug(x) cout<<#x<<"="<<x<<endl
typedef long long ll;
using namespace std;
const int N = 100009, M = 21;

int a[N],cnt[N];
ll f[M][N];
int n,m,lp,rp;
ll sum;

inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}


void modify(int l,int r)
{
	while(lp>l) lp--,sum+=cnt[a[lp]]++;
	while(rp<r) rp++,sum+=cnt[a[rp]]++;
	while(lp<l) sum-=--cnt[a[lp]],lp++;
	while(rp>r) sum-=--cnt[a[rp]],rp--;
}

void solve(int step,int l,int r,int L,int R)
{
	if(l>r) return ;
	int mid=(l+r)>>1,p=min(mid,R),Mid=L;
	for(int i=L;i<=p;i++)
	{
		modify(i,mid);
		if(f[step-1][i-1]+sum<f[step][mid]) f[step][mid]=f[step-1][i-1]+sum,Mid=i;
	}
	solve(step,l,mid-1,L,Mid);
	solve(step,mid+1,r,Mid,R);
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
		lp=1;rp=0;sum=0;
		solve(i,1,n,1,n);
	}
	cout<<f[m][n]<<endl;
	return 0;
}
