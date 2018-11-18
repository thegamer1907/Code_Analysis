#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
const int N=100010;
ll ans;
int l1,r1;
ll f[N],g[N];
int a[N],w[N];
inline int gi() {
    int x=0,o=1;
    char ch=getchar();
    while(ch!='-'&&(ch<'0'||ch>'9')) ch=getchar();
    if(ch=='-') o=-1,ch=getchar();
    while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
    return x*o;
}
inline void add(int x,int f) {
    if(f==1) ans+=w[x],++w[x];
    else --w[x],ans-=w[x];
}
inline void init(int l,int r) {
    while(l<l1) add(a[--l1],1);
    while(r>r1) add(a[++r1],1);
    while(l1<l) add(a[l1++],-1);
    while(r1>r) add(a[r1--],-1);
}
inline void solve(int l,int r,int L,int R) {
    if(l>r) return;
    int x=(l+r)>>1,la;
    for(int i=L;i<=R&&i<x;i++) {
	init(i+1,x);
	if(ans+g[i]<f[x]) f[x]=ans+g[i],la=i;
    }
    solve(l,x-1,L,la),solve(x+1,r,la,R);
}
int main() {
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) a[i]=gi();
    k=min(n,k);
    memset(f,127/3,sizeof(f));
    f[0]=0;
    for(int i=1;i<=k;i++) {
	memset(w,0,sizeof(w));
	memcpy(g,f,sizeof(g));
	memset(f,127/3,sizeof(f));
	l1=1,r1=0,ans=0;
	solve(i,n,i-1,n-1);
    }
    cout<<f[n];
    return 0;
}