#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
const ll M = 1e9 + 7;
ll power(ll x, ll y){
    x %= M;
    ll ans = 1;
    while(y){
        if(y & 1)
            ans = (ans * x) % M;
        y >>= 1LL;
        x = (x * x) % M;
    }
    return ans;
}
ll ad(ll a, ll b){
    return((a % M + b % M) % M);
}
ll sub(ll a, ll b){
    return((a % M - b % M + M) % M);
}
ll mul(ll a, ll b){
    return(((a % M) * (b % M)) % M);
}
ll divi(ll a, ll b){
    return(mul(a, power(b, M - 2)) % M);
}
ll dp[N];
ll a[N];
void pre(ll k){
    dp[0] = 1;
    for(int i = 1; i < N; i++){
        if(i < k) dp[i] = 1;
        dp[i] = ad(dp[i - 1], dp[i - k]);
    }
    for(int i = 1; i < N; i++) a[i] = dp[i], a[i] = ad(a[i], a[i - 1]);
}
int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t, k;
    cin >> t >> k;
    pre(k);
    for(int i = 0; i < t; i++){
        ll aa, b;
        cin >> aa >> b;
        cout << sub(a[b], a[aa - 1]) << "\n";
    }
return 0;
}
