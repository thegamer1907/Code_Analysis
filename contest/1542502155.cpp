//minamoto
#include<iostream>
#include<cstdio>
#include<cstring>
#define ll long long
using namespace std;
#define getc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
char buf[1<<21],*p1=buf,*p2=buf;
inline int read(){
    #define num ch-'0'
    char ch;bool flag=0;int res;
    while(!isdigit(ch=getc()))
    (ch=='-')&&(flag=true);
    for(res=num;isdigit(ch=getc());res=res*10+num);
    (flag)&&(res=-res);
    #undef num
    return res;
}
const int N=1e5+5;
int a[N],c[N],n,k;
ll ff[N],gg[N],*f=ff,*g=gg;
void solve(int l,int r,int kl,int kr,ll w){
	if(l>r) return;
	int m=l+r>>1,k=0,p=m<kr?m:kr;
	for(int i=l;i<=m;++i) w+=c[a[i]]++;
	for(int i=kl;i<=p;++i) w-=--c[a[i]],g[m]>f[i]+w?g[m]=f[i]+w,k=i:0;
	for(int i=kl;i<=p;++i) w+=c[a[i]]++;
	for(int i=l;i<=m;++i) w-=--c[a[i]];
	solve(l,m-1,kl,k,w);
	for(int i=l;i<=m;++i) w+=c[a[i]]++;
	for(int i=kl;i<k;++i) w-=--c[a[i]];
	solve(m+1,r,k,kr,w);
	for(int i=kl;i<k;++i) ++c[a[i]];
	for(int i=l;i<=m;++i) --c[a[i]];
}
int main(){
	//freopen("testdata.in","r",stdin);
	n=read(),k=read();
	ll *tmp;
	for(int i=1;i<=n;++i) f[i]=f[i-1]+c[a[i]=read()]++;
	memset(c,0,sizeof(c));
	while(--k){
		memset(g,1,(n+1)<<3);
		solve(1,n,1,n,0);
		tmp=f,f=g,g=tmp;
	}
	printf("%lld\n",f[n]);
	return 0;
}