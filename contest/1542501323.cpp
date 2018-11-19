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
const int maxn=1e5+10;
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
LL n,k,a[maxn],c[maxn],f[maxn],g[maxn];
il void solve(int l,int r,int kl,int kr,LL w) {
    if(l>r) return;
    int mid=(l+r)>>1,p=min(mid,kr),K=0;
    for(int i=l;i<=mid;i++) w+=c[a[i]]++;
    for(int i=kl;i<=p;i++){
		w-=--c[a[i]];
		f[mid]>g[i]+w?f[mid]=g[i]+w,K=i:0;
	}
    for(int i=l;i<=mid;i++) w-=--c[a[i]];
    for(int i=kl;i<=p;i++) w+=c[a[i]]++;
    solve(l,mid-1,kl,K,w);
    for(int i=kl;i<K;i++) w-=--c[a[i]];
    for(int i=l;i<=mid;i++) w+=c[a[i]]++;
    solve(mid+1,r,K,kr,w);
    for(int i=l;i<=mid;i++) --c[a[i]];
    for(int i=kl;i<K;i++) ++c[a[i]];
}
int main(){
	n=read(),k=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		g[i]=g[i-1]+c[a[i]]++;
	}
	memset(c,0,sizeof(c));
	while(k--){
		memset(f,0x7f,sizeof(f));
		solve(1,n,1,n,0);
		swap(f,g);
	}
	cout<<f[n]<<endl;
	return 0;
}