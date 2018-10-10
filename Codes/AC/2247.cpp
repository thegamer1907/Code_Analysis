#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

const int maxn=2e5+100;

int n;
int a[maxn];
LL ans=0;


LL dfs(int lp,int rp,LL lsum,LL rsum)
{
    if(lp>rp){
        if(lsum==rsum) return lsum;
        else return 0;
    }
    if(lsum==rsum){
        if(lp!=rp) return lsum+dfs(lp+1,rp-1,a[lp],a[rp]);
        else return lsum;
    }
    else if(lsum>rsum) return dfs(lp,rp-1,lsum,rsum+a[rp]);
    else return dfs(lp+1,rp,lsum+a[lp],rsum);
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    ans=dfs(0,n-1,0,0);
    printf("%lld\n",ans);
    return 0;
}
