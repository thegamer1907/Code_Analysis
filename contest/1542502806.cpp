#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define N 100010
#define ll long long
#define INF 1e18
ll f[2][N];
int i,j,k,n,m,p,a[N],cnt[N];
bool b;
inline void Solve(int l,int r,int L,int R,ll s){
    if(l>r)return;
    int Mid=l+r>>1,x=0;
    for(int i=l;i<=Mid;i++)s+=cnt[a[i]]++;
    for(int i=L;i<=R&&i<=Mid;i++){
        s-=--cnt[a[i]];
        if(s+f[b^1][i]<f[b][Mid])x=i,f[b][Mid]=s+f[b^1][i];
    }
    for(int i=L;i<=R&&i<=Mid;i++)s+=cnt[a[i]]++;
    for(int i=l;i<=Mid;i++)s-=--cnt[a[i]];
    Solve(l,Mid-1,L,x,s);
    for(int i=L;i<x;i++)s-=--cnt[a[i]];
    for(int i=l;i<=Mid;i++)s+=cnt[a[i]]++;
    Solve(Mid+1,r,x,R,s);
    for(int i=L;i<x;i++)cnt[a[i]]++;
    for(int i=l;i<=Mid;i++)cnt[a[i]]--;
}
int main(){
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    for(i=1;i<=n;i++)f[1][i]=f[1][i-1]+(cnt[a[i]]++);
    while(--m){
        memset(cnt,0,sizeof(cnt));
        for(i=1;i<=n;i++)f[b][i]=INF;
        Solve(1,n,1,n,0);
        b^=1;
    }
    cout<<f[b^1][n]<<endl;
    return 0;
}