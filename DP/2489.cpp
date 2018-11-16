#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define P 52081
#define MP make_pair
#define sz(v) (ll)v.size()
#define inf 300000


using namespace std;
ll dp[100005][2],k,x[100005];
ll f(ll i,ll x){
    //cout<<i<<" "<<x<<endl;
    if(i==0) return 1;
    if(i<0) return 0;
    ll &res=dp[i][x];
    if(res!=-1) return  res;
    
    res=(f(i-1,0)+f(i-k,1))%mod;
    return res;
}
int main()  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    memset(dp,-1,sizeof(dp));
    cin>>t>>k;
    for(ll i=1;i<=100000;i++) x[i]=f(i,0);
    //for(ll i=1;i<=10;i++) cout<<x[i]<<" "; 
    for(ll i=2;i<=100000;i++) x[i]=(x[i-1]+x[i])%mod;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<(x[b]-x[a-1]+mod)%mod<<"\n";

    }
return 0;

}
