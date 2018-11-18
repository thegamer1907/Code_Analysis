#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<climits>
#define K 25
#define N 100010
#define lint long long
#define gc getchar()
#define INF (LLONG_MAX/10)
#define debug(x) cerr<<#x<<"="<<x
#define sp <<" "
#define ln <<endl
using namespace std;
inline int inn()
{
	int x,ch;while((ch=gc)<'0'||ch>'9');
	x=ch^'0';while((ch=gc)>='0'&&ch<='9')
		x=(x<<1)+(x<<3)+(ch^'0');return x;
}
lint v,dp[K][N];int l,r,c[N],a[N];
inline int move(int s,int t)
{
//	debug(l)sp,debug(r)sp,debug(s)sp,debug(t)ln;
	while(l>s) v+=c[a[--l]]++;
	while(l<s) v-=--c[a[l++]];
	while(r>t) v-=--c[a[r--]];
	while(r<t) v+=c[a[++r]]++; 
//	debug(l)sp,debug(r)ln;
	return 0;
}
int solve(lint *pre,lint *now,int L,int R,int s,int t)
{
	if(s>t) return 0;int mid=(s+t)>>1,x=L;now[mid]=INF;
//	debug(L)sp,debug(R)sp,debug(s)sp,debug(t)sp,debug(mid)ln;
	for(int i=L;i<=min(R,mid-1);i++)
		move(i+1,mid),((pre[i]+v<now[mid])?now[mid]=pre[x=i]+v:0);
//	debug(x)sp,debug(mid)sp,debug(now[mid])ln;
	return solve(pre,now,L,x,s,mid-1),solve(pre,now,x,R,mid+1,t);
}
int main()
{
	int n=inn(),k=inn();
	for(int i=1;i<=n;i++) dp[1][i]=dp[1][i-1]+(c[a[i]=inn()]++);
	memset(c,0,sizeof(int)*(n+1));
	for(int i=2;i<=k;i++)
		v=r=0,memset(c,0,sizeof(int)*(n+1)),
		l=1,solve(dp[i-1],dp[i],1,n,1,n);
	return !printf("%I64d\n",dp[k][n]);
}