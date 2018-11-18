#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
inline char nc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
inline void Read(int& x){
    char c=nc();
    for(;c<'0'||c>'9';c=nc());
    for(x=0;c>='0'&&c<='9';x=(x<<3)+(x<<1)+c-48,c=nc());
}
#define N 100010
#define ll long long
#define INF 1e18
ll f[2][N];
int i,j,k,n,m,p,a[N],c[N];
bool b;
inline void Solve(int l,int r,int L,int R,ll s){
    if(l>r)return;
    int Mid=l+r>>1,x=0;
    for(int i=l;i<=Mid;i++)s+=c[a[i]]++;
    for(int i=L;i<=R&&i<=Mid;i++){
        s-=--c[a[i]];
        if(s+f[b^1][i]<f[b][Mid])x=i,f[b][Mid]=s+f[b^1][i];
    }
    for(int i=L;i<=R&&i<=Mid;i++)s+=c[a[i]]++;
    for(int i=l;i<=Mid;i++)s-=--c[a[i]];
    Solve(l,Mid-1,L,x,s);
    for(int i=L;i<x;i++)s-=--c[a[i]];
    for(int i=l;i<=Mid;i++)s+=c[a[i]]++;
    Solve(Mid+1,r,x,R,s);
    for(int i=L;i<x;i++)c[a[i]]++;
    for(int i=l;i<=Mid;i++)c[a[i]]--;
}
int main(){
    Read(n);Read(m);
    for(i=1;i<=n;i++)Read(a[i]);
    for(i=1;i<=n;i++)f[1][i]=f[1][i-1]+(c[a[i]]++);
    while(--m){
        memset(c,0,sizeof(c));
        for(i=1;i<=n;i++)f[b][i]=INF;
        Solve(1,n,1,n,0);
        b^=1;
    }
    cout<<f[b^1][n]<<endl;
    return 0;
}