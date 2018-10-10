#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL n,m;
LL k;
int check(LL t)
{
    LL tmp=0;
    for(int i=1;i<=n;i++){
        tmp+=min(m,t/i);
    }    
    if(tmp>=k) return 1;
    else return 0;
}
int main()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    LL l=1,r=1ll*n*m;
    LL mid,ans=0;
    while(l<=r){
        mid=(l+r)/2;
        if(check(mid)==1){
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }
    printf("%lld\n",ans);
}
