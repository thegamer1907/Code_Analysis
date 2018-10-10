#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
bool fun(ll x){
    ll vv=n;
    ll s1=0,s2=0;
    int cnt=0;
    while(vv){
        if(cnt%2){
            ll val=vv/10;
            s2+=val;
            vv-=val;
        }else{
            ll val=min(vv,x);
            s1+=val;
            vv-=val;
        }
        cnt++;
    }
    if(s1>=s2)return 1;
    return 0;
}
int main(){
    cin>>n;
    ll lo=1,hi=n;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        if(fun(mid))hi=mid-1;
        else lo=mid+1;
    }
    hi++;
    cout<<hi<<endl;
}
