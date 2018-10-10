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

bool primes[1000001]={0};

void prime(){
    
    primes[0]=primes[1]=1;
    for(int i=2;i<=1000000;i++){
        if(!primes[i]){
            for(int j=i*2;j<=1000000;j+=i){
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

bool divisors(ll n){
    
    for(int i=1;i<=sqrt(n);i++){
        
        if(n%i==0){
            if(i!=1)
                if(sqrt(i)==(ll)sqrt(i))return false;
            
            if(sqrt(n/i)==(ll)sqrt(n/i))return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    
    ll arr[n+1]={0};
    ll frnd[n+1]={0};
    vector<pair<ll,ll>>v;
    for(int i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    sort(v.begin(),v.end());
    
    for(int i=1;i<=n;i++){
        arr[i]=v[i-1].first;
    }
    frnd[1]=v[0].second;
    for(int i=2;i<=n;i++)frnd[i]=frnd[i-1]+v[i-1].second;
    
    ll ans=0;
    for(int i=1;i<=n;i++){
        int temp=t+arr[i];
        int f=lower_bound(arr,arr+n+1,temp)-arr;
      //  cout<<t<<" "<<f<<" "<<frnd[f-1]<<" "<<frnd[i-1]<<" "<<ans<<endl;
        ans=max(ans,(frnd[f-1]-frnd[i-1]));
    }
    cout<<ans;
    
    return 0;
}