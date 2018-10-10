#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll n,ll k){
    ll ans1 = 0,ans2 = 0;
    while(1){
        if(n <= 0) break;
        ans1 += min(n,k);
        n -= min(n,k);
        ans2 += n/10;
        n -= n/10;
    }
    //cout<<ans1<<" "<<ans2<<" "<<k<<endl;
    if(ans1 >= ans2) return 1;
    else return 0;
}
int main()
{
    ll n;
    cin>>n;
    ll l = 1,r = n;
    while(l < r){
        ll m = (l + r)/2;
        if(check(n,m))
        r = m;
        else
        l = m + 1;
    }
    cout<<l<<endl;
}
