#include <bits/stdc++.h>
#define il inline
#define RG register
#define ll long long
#define inf (1LL<<60)
#define N (100005)

using namespace std;

int sum[N],a[N],n,k,L,R;
ll f[2][N],res;

il int gi(){
  RG int x=0,q=1; RG char ch=getchar();
  while ((ch<'0' || ch>'9') && ch!='-') ch=getchar();
  if (ch=='-') q=-1,ch=getchar();
  while (ch>='0' && ch<='9') x=x*10+ch-'0',ch=getchar();
  return q*x;
}

il void work(RG int l,RG int r){
  while (L>l) res+=sum[a[--L]]++;
  while (R<r) res+=sum[a[++R]]++;
  while (L<l) res-=--sum[a[L++]];
  while (R>r) res-=--sum[a[R--]];
  return;
}

il void solve(RG int l,RG int r,RG int L,RG int R,RG int cur){
  if (l>r) return; RG int mid=(l+r)>>1,m=min(mid-1,R),pos=0;
  for (RG int i=m;i>=L;--i){
    work(i+1,mid);
    if (f[cur][mid]>f[cur^1][i]+res) f[cur][mid]=f[cur^1][i]+res,pos=i;
  }
  pos?solve(l,mid-1,L,pos,cur),solve(mid+1,r,pos,R,cur):solve(mid+1,r,L,R,cur); return;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("minimization.in","r",stdin);
  freopen("minimization.out","w",stdout);
#endif
  n=gi(),k=gi(),L=1;
  for (RG int i=1;i<=n;++i) a[i]=gi();
  for (RG int i=1;i<=n;++i)
    f[1][i]=f[1][i-1]+sum[a[i]]++;
  for (RG int i=1;i<=n;++i) sum[i]=0;
  for (RG int i=2;i<=k;++i){
    for (RG int j=1;j<=n;++j) f[i&1][j]=inf;
    solve(1,n,0,n,i&1);
  }
  cout<<f[k&1][n]; return 0;
}
