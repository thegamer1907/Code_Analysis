#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<algorithm>
#define LL long long
#define il inline
using namespace std;
const int maxn=200007;
const LL INF=0x3f3f3f3f;
il LL read(){
    LL f=1,x=0;char c=getchar();
    while(!isdigit(c)){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(isdigit(c)){
        x=x*10+c-'0';
        c=getchar();
    }
    return x*=f;
}
LL n,k,f[25][maxn],l=1,r,num[maxn],sum,a[maxn];
bool used[maxn];
il void rev(LL x){
	if(used[x]^=1) sum+=num[a[x]]++;
	else sum-=--num[a[x]];
}
il void solve(LL L,LL R){
	while(l>L) rev(--l);
	while(l<L) rev(l++);
	while(r<R) rev(++r);
	while(r>R) rev(r--);
}
il void div(LL now,LL L,LL R,LL ql,LL qr){
	if(L>R) return;
	LL mid=(L+R)>>1,ans=ql;
	for(LL i=min(mid,qr);i>=ql;i--){
		solve(i,mid);
		if(f[now][mid]>f[now-1][i-1]+sum){
			ans=i;
			f[now][mid]=f[now-1][i-1]+sum;
		}
	}
	div(now,L,mid-1,ql,ans);
	div(now,mid+1,R,ans,qr);
}
int main(){
	n=read(),k=read();
	for(LL i=1;i<=n;i++)
		a[i]=read();
	memset(f,INF,sizeof(f));
	f[0][0]=0;
	for(LL i=1;i<=k;i++)
		div(i,1,n,1,n);
	cout<<f[k][n]<<endl;
	return 0;
}