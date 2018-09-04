#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL n;
bool check(LL k,LL t)
{
    LL ans1=0,ans2=0;
    while(true){
//        if(t==0) break;
        if(t<k){
            ans1+=t;
            t=0;
        }
        else t-=k,ans1+=k;
        LL tmp=t/10;
        //printf("%lld**\n",tmp);
        t-=tmp;
        ans2+=tmp;
        if(ans1>=(n+1)/2) return true;
        else if(ans2>n/2) return false;  
    }
}
int main()
{
    scanf("%lld",&n);
    LL l=1,r=n;
    LL mid;;
    LL ans;
    while(l<=r){
        mid=(l+r) >> 1;
        if(check(mid,n)){
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }
    printf("%lld\n",ans);
    return 0;
}
