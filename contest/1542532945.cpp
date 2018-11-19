#include<bits/stdc++.h>
#define maxn 100009
#define LL long long
using namespace std;
int a[maxn],t[maxn],L=1,R=0;
LL ans=0,f[maxn][23];
inline void move(int l,int r){
  while(R<r) R++,ans+=t[a[R]],t[a[R]]++;
  while(L>l) L--,ans+=t[a[L]],t[a[L]]++;
  while(R>r) t[a[R]]--,ans-=t[a[R]],R--;
  while(L<l) t[a[L]]--,ans-=t[a[L]],L++;
}
inline void solve(int l1,int r1,int l2,int r2,int id){
  if(l1>r1) return;
  int mid=(l1+r1)>>1,lim=min(mid-1,r2),p=0;
  for(int i=lim;i>=l2;i--){
    move(i+1,mid);
    if(f[i][id-1]+ans<f[mid][id]) f[mid][id]=f[i][id-1]+ans,p=i;
  }
  if(p) solve(l1,mid-1,l2,p,id),solve(mid+1,r1,p,r2,id);
  else solve(mid+1,r2,l2,r2,id);
}
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;i++) scanf("%d",a+i);
  memset(f,127/3,sizeof(f)),f[1][1]=0;t[a[1]]++;
  for(int i=2;i<=n;i++)
    f[i][1]=f[i-1][1]+t[a[i]],t[a[i]]++;
  memset(t,0,sizeof(t));
  for(int i=2;i<=m;i++) solve(i,n,1,n,i);
  printf("%lld",f[n][m]);
  return 0;
}
