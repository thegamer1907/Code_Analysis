#include<bits/stdc++.h>
#define REP(i,a,b) for(register int i(a);i<=(b);++i)
using namespace std;
typedef long long ll;
inline int read(){char c;int w;
	while(!isdigit(c=getchar()));w=c&15;
	while(isdigit(c=getchar()))w=w*10+(c&15);return w;
}
inline char smin(ll&x,const ll&y){return x>y?x=y,1:0;}
const int N=1e5+5,n=read();
int a[N],c[N];
ll ff[N],gg[N],*f=ff,*g=gg,*t;
void solve(int l,int r,int ql,int qr,ll w){
	if(l>r)return;int m=l+r>>1,p=min(m,qr),q=0;
	REP(i,l,m)w+=c[a[i]]++;
	REP(i,ql,p)w-=--c[a[i]],smin(f[m],g[i]+w)&&(q=i);
	REP(i,ql,p)w+=c[a[i]]++;REP(i,l,m)w-=--c[a[i]];
	solve(l,m-1,ql,q,w);
	REP(i,l,m)w+=c[a[i]]++;REP(i,ql,q-1)w-=--c[a[i]];
	solve(m+1,r,q,qr,w);
	REP(i,ql,q-1)++c[a[i]];REP(i,l,m)--c[a[i]];
}
int main(){
	int k=read();//233333
	REP(i,1,n)f[i]=f[i-1]+c[a[i]=read()]++;
	memset(c,0,sizeof c);
	REP(i,2,k){
		t=f,f=g,g=t;
		memset(f,0x3f,n+1<<3);
		solve(1,n,1,n,0);
	}
	cout<<f[n];
	return 0;
}
