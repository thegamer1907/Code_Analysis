#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
LL f(LL k){
    LL curr=n,ret=0;
    while(curr>0){
        ret+=min(curr,k);
        curr-=min(curr,k);
        curr-=curr/10;
    }
    return ret;
}
int main(){
    cin>>n;
    LL half=(n+1)/2;
    LL lo=1,hi=n;
    LL ans=n;
    while(lo<=hi){
        LL c1=f(lo);
        if(c1>=half){ans=min(ans,lo);break;}
        LL c2=f(hi);
        if(c2<half){break;}
        if(lo+5>=hi){
            for(LL k=lo;k<=hi;k++){
                LL candy=f(k);
                if(candy>=half){
                    ans=min(ans,k);
                }
            }
            break;
        }
        LL mid=(lo+hi)/2;
        LL candy=f(mid);
        if(candy>=half){
            ans=min(ans,mid);
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
