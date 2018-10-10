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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,l;
    cin>>n>>l;
    
    double arr[n]={0};
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr,arr+n);
    
    double ans=max((arr[0]-0),(l-arr[n-1]));
    
    for(int i=0;i<n-1;i++){
        
        double d = (arr[i+1]-arr[i])/2;
        ans=max(ans,d);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
    
    return 0;
}