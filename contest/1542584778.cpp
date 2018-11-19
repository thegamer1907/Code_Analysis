#include<cstdio>
typedef long long ll;
const int N=100010;
const ll inf=1LL<<60;
int n,m,i,j,o,a[N],v[N],L,R;ll cur,f[2][N];
int head,tail;
struct E{int l,r,dl,dr;E(){}E(int _l,int _r,int _dl,int _dr){l=_l,r=_r,dl=_dl,dr=_dr;}}q[N];
inline void ext(int l,int r,int dl,int dr){
  if(l>r)return;
  q[++tail]=E(l,r,dl,dr);
}
inline void add(int x){cur+=v[a[x]]++;}
inline void del(int x){cur-=--v[a[x]];}
inline ll ask(int l,int r){
  if(R<r){for(R++;R<=r;R++)add(R);R--;}
  if(R>r)for(;R>r;R--)del(R);
  if(L<l)for(;L<l;L++)del(L);
  if(L>l){for(L--;L>=l;L--)add(L);L++;}
  return cur;
}
inline void solve(int l,int r,int dl,int dr){
  int m=(l+r)>>1,dm=dl;
  ll&t=f[o][m];
  for(int i=dl;i<=dr&&i<=m;i++){
    ll now=ask(i,m)+f[o^1][i-1];
    if(now<t)t=now,dm=i;
  }
  ext(l,m-1,dl,dm);
  ext(m+1,r,dm,dr);
}
int main(){
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)scanf("%d",&a[i]);
  for(i=1;i<=n;i++){
    cur+=v[a[i]];
    v[a[i]]++;
    f[o][i]=cur;
    //printf("%d %lld\n",i,f[o][i]);
  }
  for(j=2;j<=m;j++){
    o^=1;
    for(i=1;i<=n;i++)f[o][i]=inf;
    for(i=1;i<=n;i++)v[i]=0;
    cur=0;
    L=1,R=0;
    head=1,tail=0;
    ext(j,n,j,n);
    while(head<=tail){
      solve(q[head].l,q[head].r,q[head].dl,q[head].dr);
      head++;
    }
  }
  printf("%lld",f[o][n]);
}