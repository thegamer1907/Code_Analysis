//by Judge
#include<iostream>
#include<cstring>
#include<cstdio>
#define mid (l+r>>1)
#define ll unsigned long long
using namespace std;
const int M=1e5+111;
//#define getchar() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
char buf[1<<21],*p1=buf,*p2=buf;
inline int read(){
	int x=0,f=1; char c=getchar();
	for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
	for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
}
ll n,k,a[M],g[M],f[M],now,head,tail,q[M];
void solv(int l,int r,int L,int R){
	if(l>r) return ; int tmp=min(mid,R); ll mv=1e18;
	while(tail<mid) now+=q[a[++tail]]++;
	while(head>tmp+1) now+=q[a[--head]]++;
	while(tail>mid) now-=--q[a[tail--]];
	while(head<tmp+1) now-=--q[a[head++]];
	for(int i=tmp;i>=L;--i){
		int x=a[i]; now+=q[a[--head]]++;
		if(now+g[i-1]<mv) mv=now+g[i-1],tmp=i;
	} f[mid]=mv,solv(l,mid-1,L,tmp),solv(mid+1,r,tmp,R);
}
signed main(){
	n=read(),k=read(),memset(g,0x3f,sizeof(g)),g[0]=0;
	for(int i=1;i<=n;++i) a[i]=read();
	for(int i=1;i<=k;++i){
		head=1,tail=now=0;
		memset(q,0,sizeof(q));
		solv(i,n,i,n),swap(f,g);
	} printf("%I64d\n",g[n]); return 0;
}