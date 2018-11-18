#pragma GCC optimize(2)
#include<cstdio>
#include<cstring>
#define RG register
#define R RG int
#define G c=getchar()
typedef long long LL;
const int N=1e5+9;
int a[N],c[N];
LL ff[N],gg[N],*f=ff,*g=gg;
inline int in(){
	RG char G;
	while(c<'-')G;
	R x=c&15;G;
	while(c>'-')x=x*10+(c&15),G;
	return x;
}
void solve(R l,R r,R kl,R kr,RG LL w){
	if(l>r)return;
	R m=(l+r)>>1,k=0,p=m<kr?m:kr,i;
	for(i= l;i<=m;++i)w+=c[a[i]]++;
	for(i=kl;i<=p;++i)w-=--c[a[i]],g[m]>f[i]+w?g[m]=f[i]+w,k=i:0;
	for(i=kl;i<=p;++i)w+=c[a[i]]++;
	for(i= l;i<=m;++i)w-=--c[a[i]];
	solve(l,m-1,kl,k,w);
	for(i= l;i<=m;++i)w+=c[a[i]]++;
	for(i=kl;i< k;++i)w-=--c[a[i]];
	solve(m+1,r,k,kr,w);
	for(i=kl;i< k;++i)++c[a[i]];
	for(i= l;i<=m;++i)--c[a[i]];
}
int main(){
	R n=in(),k=in();
	RG LL*tmp;
	for(R i=1;i<=n;++i)
		f[i]=f[i-1]+c[a[i]=in()]++;
	memset(c,0,(n+1)<<2);
	while(--k){
		memset(g,1,(n+1)<<3);
		solve(1,n,1,n,0);
		tmp=f;f=g;g=tmp;
	}
	printf("%lld\n",f[n]);
	return 0;
}