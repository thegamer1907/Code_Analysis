#include        <bits/stdc++.h>
#define ll      long long int
#define pb      push_back
#define F       first
#define S       second
#define MOD     1000000007
#define pii     pair<int,int>
#define vi      vector<int>
#define fio     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N       1000010
#define M       21
using namespace std;

ll expo(ll base, ll p, ll mod){
    ll ret=1;
    while(p){
        if(p&1){
            ret*=base;
            ret%=mod;
        }
        base*=base;
        base%=mod;
        p>>=1;
    }
    return ret;
}

ll h[N];
vector<ll>v;
string s;

bool f(ll x){
    int n=s.size();
    for(int l=1,r=x; r<n-1; l++,r++){
        ll hash=(h[r]-((h[l-1]*expo(29LL,x,MOD))%MOD)+MOD)%MOD;
        if(hash==h[x-1])return true;
    }
    return false;
}

int main() {
    fio;
    //string s;
    cin>>s;
    int n=s.size();
    ll hash=0,b=29;
    //cout<<"here";
    for(int i=0; i<n; i++){
        hash=hash*b+(s[i]-'a'+1);
        hash%=MOD;
        h[i]=hash;
        //cout<<hash<<" "<<i<<endl;
    }
    
    for(ll i=0; i<n-1; i++){
        ll len=i+1;
        ll r=n-1,l=n-len;
        hash=(h[r]-((h[l-1]*expo(b,len,MOD))%MOD)+MOD)%MOD;
        //cout<<i+1<<" "<<h[i]<<" "<<hash<<endl;
        if(hash==h[i]){
            v.pb(len);
        }
    }

    //for(auto it:v)cout<<it<<" zzz ";
    
    int l=0,r=v.size()-1,m;
    int ans=-1;
    while(l<=r){
        m=(l+r)/2;
        //cout<<v[m]<<" zzz\n";
        if(f(v[m])){
            ans=max(ans,(int)v[m]);
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    
    if(ans==-1)
        cout<<"Just a legend";
    else{
        cout<<(s.substr(0,ans));
    }
    
    return 0;
}












