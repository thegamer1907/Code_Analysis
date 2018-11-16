/* ****Tciitb**** */
                     
#include<bits/stdc++.h>
#define io          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define ll          int long long
#define pb          push_back
#define endl        '\n'
#define pii         pair<ll ,ll >
#define vi          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll)x.size()
#define hell        1000000007
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=a-1;i>=b;i--)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;


 

int main()
{
    io
    ll n,m;
    cin>>n>>m;
    std::vector<ll> a(n);
    std::map<ll,ll> b;
    ll dp[n+1]={0};
    rep(i,0,n)
    cin>>a[i];
    repr(i,n,0)
    {
       dp[i]=dp[i+1];
       if(b.find(a[i])==b.end())
       {
        dp[i]++;
        b[a[i]]=1;

       }
    }
    while(m--)
    {
       ll q;
       cin>>q;
       cout<<dp[q-1]<<endl;
    }
    return 0;
}
