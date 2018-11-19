#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define il inline
#define outy printf("Yes\n")
#define outn printf("No\n")
#define outf printf("First\n")
#define outs printf("Second\n")
#define FOR(a,b,c) for(int a=b;a<=c;a++)
#define FORD(a,b,c) for(int a=b;a>=c;a--)
#define FORL(a,b) for(int a=head[b];a;a=nxt[a])
#define in(a)  a=read()
#define in2(a,b)  a=read(),b=read()
#define in3(a,b,c)  a=read(),b=read(),c=read()
#define in4(a,b,c,d)  a=read(),b=read(),c=read(),d=read()
#define inl(a)  a=readl()
#define inl2(a,b)  a=readl(),b=readl()
#define inl3(a,b,c)  a=readl(),b=readl(),c=readl()
#define inl4(a,b,c,d)  a=readl(),b=readl(),c=readl(),d=readl()
#define out(a) printf("%d\n",a)
#define out2(a,b) printf("%d %d\n",a,b)
#define out3(a,b,c) printf("%d %d %d\n",a,b,c)
#define out4(a,b,c,d) printf("%d %d %d %d\n",a,b,c,d)
#define outl(a) printf("%lld\n",a)
#define outl2(a,b) printf("%lld %lld\n",a,b)
#define outl3(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define outl4(a,b,c,d) printf("%lld %lld %lld %lld\n",a,b,c,d)
#define clr(x,y) memset(x,y,sizeof(x))
inline int read(){
    char c;int s=0,t=1;
    while(!isdigit(c=getchar()))if(c=='-')t=-1;
    do{s=s*10+c-'0';}while(isdigit(c=getchar()));
    return s*t;
}
inline ll readl(){
    char c;ll s=0;int t=1;
    while(!isdigit(c=getchar()))if(c=='-')t=-1;
    do{s=s*10+c-'0';}while(isdigit(c=getchar()));
    return s*t;
}
/*------------------------------------------------------------*/
#define mod 1000000007
#define maxn 1
/*------------------------------------------------------------*/
int n,m;
int f[500];
int main(){
	int h,m,s,t1,t2;
	in4(h,m,s,t1);in(t2);
	if(m||s)f[(h*10+1-1)%120+1]=true;
	 else f[h*10]=true;
	if(!m)m=60;
	if(s)f[(m*2+1-1)%120+1]=true;
	 else f[m*2]=true;
	f[s*2]=true;if(!s)f[120]=true;
	t1*=10;t2*=10;
	int k=0;
	if(t1<t2){
		FOR(i,t1+1,t2-1)if(f[i]){k=1;}
		if(!k)outy;
		 else {
		 	k=0;
		 	FOR(i,t2+1,120)if(f[i])k=1;
		 	FOR(i,0,t1-1)if(f[i])k=1;
		 	if(!k)outy;
		 	 else outn;
		 }
	}
	 else {
	 	FOR(i,t1+1,120)if(f[i]){k=1;}
	 	FOR(i,0,t2-1)if(f[i]){k=1;}
	 	if(!k)outy;
	 	 else {
	 	 	k=0;
	 	 	FOR(i,t2+1,t1-1)if(f[i])k=1;
	 	 	if(!k)outy;
	 	 	 else outn;
	 	 }
	 }
}