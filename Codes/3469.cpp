#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn = 1e5+10, mod = 1e9+7;
ll check(ll x,ll t){
    ll sum = 0, n = t;
    while(n > x){
        n -= x;
        sum += n/10;
        n -= n/10;
    }
    return t-sum;
    cout<<t-sum<<" "<<sum<<endl;
}
int main(){
    ll n;
    //cout<<check(1, 10)<<endl;
    cin>>n;
    ll l = 1,r = n, ans = -1;
    while(l <= r){
        ll mid = (l+r)>>1;
        if(check(mid, n)*2 >= n) r = mid-1, ans = mid;
        else l = mid+1;
    }
    cout<<ans<<endl;
    return 0;
}

