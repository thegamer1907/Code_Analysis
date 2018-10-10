// ---- My Template start------- //
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pll pair<ll,ll>
#define pii pair<float,int>
#define pb push_back
#define mod 1000000007
#define s(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define forl(i,x,y) for(ll i=x;x<y;i++)
#define flash ios_base::sync_with_stdio(false);
#define MAX5 100005
#define MAX6 1000005
#define MLOG 18
#define limit 10e18
ll power(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
// ---- My Template end------- //
ll fact[2*MAX5];
ll func(){
    fact[0] = fact[1] = 1;
    for(ll i = 2; i < 200001; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
}
ll n,k;
string s;
ll pred(ll mid){
    ll ca = 0;
    ll cb = 0;
    ll j = 0;
    for(ll i = 0; i < mid; i++){
        if(s[i] == 'a') ca++;
        else cb++;
    }
    if(min(ca,cb)<=k) return 1;
    for(ll i = mid; i < n; i++){
        if(s[i] == 'a') ca++;
        else cb++;
        if(s[j] == 'a') ca--;
        else cb--;
        if(min(ca,cb)<=k) return 1;
        j++;
    }
    return 0;

}
int main(){
    cin >> n >> k;
    cin >> s;
    ll low = 1;
    ll high = n;
    ll ans = -1;
    while(low <= high){
        ll mid = (low+high)/2;
        if(pred(mid)){
            low = mid+1;
            ans = max(ans,mid);
        }
        else{
            high = mid-1;
        }
        //cout << mid << endl;
    }
    cout << ans;
}