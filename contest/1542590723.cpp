#include<cstdio>
#include<cstring>
#include<algorithm>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define Rep(i,x) for(int i=head[x];i+1;i=nxt[i])
#define rep2(i,a,b) for(int i=(a);i<(b);i++)
#define ff first
#define ss second
using namespace std;
const int N=200005;
const int inf=1e9+7;
typedef long long ll;
//------------------------------------------head---------------------------------------------------//
int f[20],cnt[10];
int main()
{
	int n,k;scanf("%d%d",&n,&k);
	rep(i,1,n)
	{
		int res=0;
		rep(j,0,k-1){int x;scanf("%d",&x);if(x)res|=(1<<j);}
		f[res]=1;
	}
	rep(i,1,(1<<(1<<k))-1)
	{
		int p=(1<<k)-1;int flag=1;
		rep(j,0,p)if(!f[j] && (1<<j)&i)flag=0;if(!flag)continue;
		rep(j,0,k-1)cnt[j]=0;int sz=0;
		rep(j,0,p)if((1<<j)&i){sz++;rep(tt,0,k-1)if((1<<tt)&j)cnt[tt]++;}
		rep(j,0,k-1)if(cnt[j]>sz/2)flag=0;
		if(!flag)continue;
		puts("YES");return 0;
	}
	puts("NO");
	return 0;
}