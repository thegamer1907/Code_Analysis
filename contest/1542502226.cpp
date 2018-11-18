#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
typedef long long ll;
int n,k,a[N],cnt[N],l=1,r=0;
ll ans=0,f[N][30];
void calc(int L,int R) {
    while(r<R) ans+=cnt[a[++r]]++;
    while(l>L) ans+=cnt[a[--l]]++;
    while(r>R) ans-=--cnt[a[r--]];
    while(l<L) ans-=--cnt[a[l++]];
}
void solve(int l,int r,int L,int R,int k) {
    if(l>r) return;
    int mid=(l+r)>>1,p=0;
    for(int i=min(R,mid-1);i>=L;i--) {
        calc(i+1,mid);
        if(f[i][k-1]+ans<f[mid][k]) f[mid][k]=f[i][k-1]+ans,p=i;
    }
    solve(l,mid-1,L,p,k);solve(mid+1,r,p,R,k);
}
int main() {
    cin>>n>>k;
    memset(f,0x3f,sizeof(f));
    for(int i=1;i<=n;i++) scanf("%d",a+i),ans+=cnt[a[i]]++,f[i][1]=ans;
    memset(cnt,0,sizeof(cnt));ans=0;
    for(int i=2;i<=k;i++) solve(1,n,1,n,i);
    printf("%lld\n",f[n][k]);
    return 0;
}
