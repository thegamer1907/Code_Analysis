#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define mp make_pair
#define pb push_back
#define endl '\n'
using namespace std;
ll powermod(ll _a,ll _b,ll _m){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
ll string_to_number(string s){ll x=0; stringstream convert(s); convert>>x; return x;}
ll add(ll a,ll b){ll x = (a+b)%mod; return x; }
ll mul(ll a,ll b){ll x = (a*b)%mod; return x; }
ll sub(ll a,ll b){ll x = (a-b+mod)%mod; return x; }
ll divi(ll a,ll b){ll x = a;ll y = powermod(b,mod-2,mod);ll res = (x*y)%mod;return res;}


double fac(int n){
    if(n<=1)
        return 1.0;
    else
        return n * (fac(n-1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    ll arr[n+1]={0};
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        arr[i]=arr[i-1]+x;
    }
    int m;
    cin>>m;
    
    while(m--){
        ll x;
        cin>>x;
        int f=lower_bound(arr,arr+n+1,x)-arr;
        cout<<f<<endl;
    }
    
    return 0;
}