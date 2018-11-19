#include <bits/stdc++.h>
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize(4)
#pragma GCC optimize("Ofast,no-stack-protector")
#define res register ll
#define ll long long
#define N 100005
#define K 25
#define inf 0x3f3f3f3f
using namespace std;
ll n,k,f[K][N],l=1,r,num[N],sum,a[N];
bool used[N];
inline ll read()
{
  ll X=0,w=0;
  char ch=0;
  while(!isdigit(ch))
  {
    w|=ch=='-';
    ch=getchar();
  }
  while(isdigit(ch)) X=(X<<3)+(X<<1)+(ch^48),ch=getchar();
  return w?-X:X;
}
inline void rev(res x){
	if(used[x]^=1) sum+=num[a[x]]++;
	else sum-=--num[a[x]];
}
inline void solve(res L,res R){
	while(l>L) rev(--l);
	while(l<L) rev(l++);
	while(r<R) rev(++r);
	while(r>R) rev(r--);
}
inline void div(res now,res L,res R,res ql,res qr){
	if(L>R) return;
	res mid=L+R>>1,ans=ql;
	for(res i=min(mid,qr);i>=ql;i--){
		solve(i,mid);
		if(f[now][mid]>f[now-1][i-1]+sum) ans=i,f[now][mid]=f[now-1][i-1]+sum; 
	}
	div(now,L,mid-1,ql,ans);
	div(now,mid+1,R,ans,qr);
}
int main(){
	n=read(),k=read();
	for(res i=1;i<=n;i++)
	  a[i]=read();
	memset(f,inf,sizeof(f));
	f[0][0]=0;
	for(res i=1;i<=k;i++)
	  div(i,1,n,1,n);
	printf("%lld\n",f[k][n]);
	return 0;
}