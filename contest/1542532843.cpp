#include <bits/stdc++.h>
#define li 100005
#define inf 2000000000000000000
#define mid (l+r)/2
#define lo long long
using namespace std;
lo int n,k,sum,A[li],dp[li][25],l=1,r,moo[li];
void add(lo int x){
    sum += moo[A[x]]++;
}
void rem(lo int x){
    sum -= --moo[A[x]];
}
void mo(lo int x,lo  int y){
    while(x>l){
        rem(l);
        l++;
    }
    while(x<l){
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
void dag(lo int ind,lo int l,lo int r,lo int optl,lo int optr){
    if(l>r) return ;
    lo int opt=optr;
    dp[mid][ind]=-1;
    for(int i=min(optr,mid);i>=optl;i--){
        mo(i,mid);
        if(dp[mid][ind]==-1 || dp[mid][ind]>=dp[i-1][ind-1]+sum){
            opt=i;
            dp[mid][ind]=dp[i-1][ind-1]+sum;
        }
    }
    dag(ind,l,mid-1,optl,opt);
    dag(ind,mid+1,r,opt,optr);
}
int main(){
    scanf("%lld %lld",&n,&k);
    for(int i=1;i<=n;i++) scanf("%lld",&A[i]);
    for(int i=1;i<=n;i++) dp[i][0]=inf;
    for(int i=1;i<=k;i++) dag(i,1,n,1,n);
    printf("%lld",dp[n][k]);
    return 0;
}
