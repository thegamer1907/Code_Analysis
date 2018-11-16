#include<bits/stdc++.h>
#define hell                         1000000007
#define ll                           long long
#define vll                          vector<ll>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define sz(a)                        (ll)a.size()
#define rep(i,a,b)                   for(int i=a;i<b;i++)
#define pl 							 pair<ll,ll>
#define F						 	 first
#define S							 second
#define lbnd                         lower_bound //index of val>=x
#define ubnd                         upper_bound //index of val>x
#define bs                           binary_search
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //map<ll,ll> mm;
    ll n,m,l;
    ll b[100002]={0};
    cin >> n >> m;
    ll a[n];
    rep(i,0,n) cin >> a[i];
    b[a[n-1]]=5;
    ll dp[n];
    dp[n-1]=1;
    for(ll i=n-2;i>=0;i--)
    {
        dp[i]=dp[i+1];
        if(b[a[i]]==0)
        {
            b[a[i]]=5;
            dp[i]++;
        }
    }

    while(m--)
    {
        cin >> l;
        cout << dp[l-1] << endl;
    }
}
