#include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector< ll >
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define lbnd                         lower_bound
#define ubnd                         upper_bound
#define bs                           binary_search
#define F                            first
#define S                            second
#define rep(i,a,b)                   for(i=a;i<b;i++)
#define parr(a,n)                    for(i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define pcont(a)                     for(auto i:a) cout<<i<<" ";cout<<endl;
#define ret(x)                       return cout<<x,0;
#define endl                           '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,j,n,t=1,k=0,cnt=0,mini=LLONG_MAX,maxi=LLONG_MIN,ans=0;
    ll m;
    cin>>n>>m;
    map<ll,ll> mm;
    ll b[n];
    rep(i,0,n)
    {
        cin>>b[i];
        mm[b[i]]++;
    }
    ll a[n]={0};
    a[0]=mm.size();
    rep(i,0,n-1)
    {
        a[i+1]=a[i];
        mm[b[i]]--;
        if(mm[b[i]]==0)
            a[i+1]--;
    }
    rep(i,0,m)
    {
        cin>>t;
        cout<<a[t-1]<<endl;
    }
    return 0;

}
