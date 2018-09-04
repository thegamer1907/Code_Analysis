#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m,k;
bool fun(ll x){
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            ll x1=i,x2=x/i;
            if(min(x1,x2)<=min(n,m) && max(x1,x2)<=max(n,m))return 1;
        }
    }
    return 0;
}
ll fun1(ll mid){
    ll tt=0;
    for(ll i=1;i<=n;i++){
        tt+=min(m,mid/i);
    }
    return tt;
}
int main(){
    cin>>n>>m>>k;
    ll lo=1,hi=n*m;
    ll ans=0;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        ll tt=fun1(mid);
        if(tt>=k)hi=mid-1;
        else{
            if(tt==k)ans=mid;
            else ans=mid+1;
            lo=mid+1;
        }
    }
    ll pp=ans;
    //cout<<ans<<' '<<fun(ans)<<endl;
    while(!fun(ans) && ans){
        ans--;
    }
    if(fun1(ans)>=k)cout<<ans<<endl;
    else{
        ans=pp;
        while(!fun(ans) && ans<=n*m){
            ans++;
        }
        cout<<ans<<endl;
    }
}
