 #include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector<int>
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
#define dbg(x)                       cerr << #x << " is " << x << endl;
#define endl                           '\n'

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll i,j,n,t=1,k=0,cnt=0,mini=LLONG_MAX,maxi=LLONG_MIN,ans=0;
    ll m;
    cin>>n;
    ll a[n+1];
    rep(i,1,n+1)
        cin>>a[i];
    rep(i,1,n+1)
    {
        cnt=1;
        j=i;
        while(a[j]!=-1)
            j=a[j],cnt++;
        ans=max(ans,cnt);
    }
    ret(ans)
    return 0;
}
