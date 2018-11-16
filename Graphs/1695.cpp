#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define inf INT_MAX
#define minf INT_MIN
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod = (1e9+7);
const ll N=30010;
ll powmod(ll a,ll b) {ll res=1;a%=mod;assert(b>=0);for(; b; b>>=1) {if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) {return b?gcd(b,a%b):a;}
/*
__builtin_ffs(x)  list significant + 1
__builtin_clz(x)  leading zero
__builtin_ctz(x)  trailing zero
__builtin_popcount(x)  number of 1
*/

int main() {
        ll n,t;
        cin>>n>>t;
        if(t==1) { cout << "YES"; return 0;}
        ll arr[n+1];
        for(ll i=1;i<n;i++)
            cin>>arr[i];
        ll start =1;
        while(start < t)
            start += arr[start];
        cout << (start==t  ? "YES" : "NO");
        return 0;
}

