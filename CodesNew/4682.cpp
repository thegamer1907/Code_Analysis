#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define mp make_pair
#define pb push_back
#define endl '\n'
#define pi 3.1415926536
using namespace std;
ll powermod(ll _a,ll _b,ll _m){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
ll string_to_number(string s){ll x=0; stringstream convert(s); convert>>x; return x;}
ll add(ll a,ll b){ll x = (a%mod + b%mod)%mod; return x; }
ll mul(ll a,ll b){ll x = (a%mod * b%mod)%mod; return x; }
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

ll ncr(ll n,ll r,ll m){
    
    ll C[r+1]={0};
    C[0]=1;
    
    for(ll i=1;i<=n;i++){
        for(ll j=min(i,r);j>0;j--){
            C[j]=(C[j-1]+ C[j])%m;
        }
    }
    return C[r];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
	int ans=0;
    int l=n-1,r=n-2;
    bool flag[n]={0};
    while(r>=0 && l>=0){
        while(l>=0 && flag[l])l--;
        while(r>=0 && l>=0 && arr[r]>arr[l]/2){
            r--;
        }
        if(r>=n/2)r=(n/2)-1;
        if(r>=0 && arr[r]<=arr[l]/2){
            flag[l]=1;
            flag[r]=1;
           // cout<<arr[l]<<" "<<arr[r]<<endl;
            ans++;
            l--;
            r--;
        }
    }
    
    for(int i=0;i<n;i++)if(!flag[i]){
        ans++;
       // cout<<arr[i]<<endl;
    }
    cout<<ans;
    
    return 0;
}