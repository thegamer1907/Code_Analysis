#include<bits/stdc++.h>
using namespace std;
inline int Read()  
{  
    char ch = getchar();  
    while (!((ch >= '0' && ch <= '9') || ch == '-')) ch = getchar();  
    int x = 0, p = 1;  
    if (ch == '-') p = -1, ch = getchar();  
    while (ch >= '0' && ch <= '9') x = x * 10 + ch - '0', ch = getchar();  
    return x * p;  
}
int n,k,ql=1,qr=0,a[100005],f[100005];
long long dp[100005][22],sum=0;
void add(int val){
    sum+=f[val];
    f[val]++;
}
void remove(int val){
    f[val]--;
    sum-=f[val];
}
void update(int l , int r){
    while(qr<r){
        qr++;
        add(a[qr]);
    }
    while(ql>l){
        ql--;
        add(a[ql]);
    }
    while(ql<l){
        remove(a[ql]);
        ql++;
    }
    while(qr>r){
        remove(a[qr]);
        qr--;
    }
}
void solve(int kk,int l,int r,int lo,int hi){
    if(l>r) return;
    int best=-1,mid=(l+r)>>1;
    dp[mid][kk]=1e15;
    for(int i=min(mid,hi);i>=lo;i--){
        update(i,mid);
        if(dp[mid][kk]>dp[i-1][kk-1]+sum){
            dp[mid][kk]=dp[i-1][kk-1]+sum;
            best=i;
        }
    }
    solve(kk,l,mid-1,lo,best);
    solve(kk,mid+1,r,best,hi);
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        for(int j=0;j<=k;j++) dp[i][j]=1e10;
    }
    for(int i=1;i<=n;i++){
        dp[i][1]=dp[i-1][1]+f[a[i]];
        f[a[i]]++;
    }
    for(int i=1;i<=k;i++) dp[0][i]=1e10;
    for(int i=2;i<=k;i++){
        sum=0,ql=1,qr=0;
        memset(f,0,sizeof(f));
        solve(i,1,n,1,n);
    }
    printf("%lld\n",dp[n][k]);
    return 0;
}