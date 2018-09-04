#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=(1e9+7);
const ll inf=(1ll<<62);
const int MX=3e5+9;
ll n,N;
bool check(ll k){
    n=N;
    ll ret=0;
    while(n){
        ret+=min(n,k);
        if(2*ret>=N)return 1;
        n-=min(n,k);
        ll x=n/10;
        n-=x;
    }
    return (2*ret>=N);
}
ll bn(ll l,ll r){
    ll ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid)){
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }
    return ans;
}
int main(){
    cin>>n;N=n;
    cout<<bn(1,n)<<endl;
}
