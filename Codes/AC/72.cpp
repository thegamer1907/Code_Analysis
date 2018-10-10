#include <bits/stdc++.h>
#define mod 1000003
#define ll long long
#define mp make_pair
#define pb push_back
#define endl '\n'
#define pi 3.1415926536
using namespace std;
ll powermod(ll _a,ll _b,ll _m){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
ll string_to_number(string s){ll x=0; stringstream convert(s); convert>>x; return x;}
ll add(ll a,ll b){ll x = (a+b)%mod; return x; }
ll mul(ll a,ll b){ll x = (a*b)%mod; return x; }
ll sub(ll a,ll b){ll x = (a-b+mod)%mod; return x; }
ll divi(ll a,ll b){ll x = a;ll y = powermod(b,mod-2,mod);ll res = (x*y)%mod;return res;}

bool primes[100001]={0};
vector<int>v;
void prime(){
    
    primes[0]=1;
    primes[1]=1;
    for(int i=2;i<=100000;i++){
        if(!primes[i]){
            for(int j=i*2;j<=100000;j+=i){
                primes[j]=1;
            }
        }
    }
}

double fac(int n){
    if(n<=1)
        return 1.0;
    else
        return n * (fac(n-1));
}

void divisors(int n){
    
    for(int i=1;i<=sqrt(n);i++){
        
        if(n%i==0){
          if(n%i==i)v.pb(i);
            else{
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    ll arr[n],pre[n],suf[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    pre[0]=arr[0];
    for(int i=1;i<n;i++)pre[i]=pre[i-1]+arr[i];
    ll ans=0;
    if(pre[n-1]%3==0){
        ll a=pre[n-1]/3;
        ll b= 2* pre[n-1] / 3;
        ll cnt=0;
        for(int i=0;i<n-1;i++){
            if(pre[i]==b)ans+=cnt;
            if(pre[i]==a)cnt++;
        }
    }
    
    cout<<ans;
    return 0;
}