#include <bits/stdc++.h>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

typedef long long ll;
map<ll,ll>r,c;
ll a[201010];
map<ll,ll> m1,m2;
int main(){
    ios::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    rep(i,0,n){
        cin>>a[i];
        m1[a[i]]++;
    }
    ll ans=0;
    rep(i,0,n){
        ll k1=0,k2=0;
    if(a[i]%k==0)
        k1=m2[a[i]/k];
    m1[a[i]]--;
    k2=m1[a[i]*k];
    ans+=k1*k2;
    m2[a[i]]++;
    }
    cout<<ans;

}
