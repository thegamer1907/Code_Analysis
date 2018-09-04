#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

LL n;
LL half;
bool cal(LL k){
    LL tot=n;
    LL a=0,b=0;
    LL t1,t2;
    while(1){
        t1=min(k,tot);
        a+=t1;
        tot-=t1;
        t2=tot/10;
        b+=t2;
        tot-=t2;
        if(a>=half) return true;
        if(n-b<half)    return false;
    }
}
int main(){
    scanf("%lld",&n);
    LL l=1,r=n,ans=n;
    half=(n+1)/2;
    for(int i=0;i<520;i++){
        LL m=(l+r)/2;
        if(cal(m))  r=m,ans=min(ans,m);
        else    l=m;
    }
    printf("%lld\n",ans);
    return 0;
}
