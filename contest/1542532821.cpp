#include <bits/stdc++.h>
#define li 100005
#define inf 2000000000000000000
#define lo long long
#define mid (l+r)/2
using namespace std;
int n,k,A[li],l=1,r;
lo int dp[li][25],sum,h[li];
void add(int x){
    sum += h[A[x]]++;
}
void rem(int x){
    sum -= --h[A[x]];
}
void mo(int x,int y){
    while(l<x){
        rem(l);
        l++;
    }
    while(l>x){
        l--;
        add(l);
    }
    while(y>r){
        r++;
        add(r);
    }
    while(y<r){
        rem(r);
        r--;
    }
}
void dag(int ind,int l,int r,int optl,int optr){
    if(l>r) return ;
    int opt=optr;
    dp[mid][ind]=-1;
    for(int i=min(mid,optr);i>=optl;i--){
        mo(i,mid);
        if(dp[mid][ind]==-1 || dp[mid][ind]>=dp[i-1][ind-1]+sum){
            dp[mid][ind]=dp[i-1][ind-1]+sum;
            opt=i;
        }
    }
    dag(ind,l,mid-1,optl,opt),dag(ind,mid+1,r,opt,optr);
}
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&A[i]);
    for(int i=1;i<=n;i++) dp[i][0]=inf;
    for(int i=1;i<=k;i++) dag(i,1,n,1,n);
    printf("%lld",dp[n][k]);
    return 0;
}
