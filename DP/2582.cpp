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
    ll n;
    cin>>n;
    std::vector<ll> a(n+1);
    ll c=0;
    ll ans=-1;
    rep(i,1,n+1)
    {
      cin>>a[i];
      if(a[i]>a[i-1])
        c++;
      else
        c=1;
      ans=max(ans,c);
    }
    cout<<ans;

    return 0;
}
