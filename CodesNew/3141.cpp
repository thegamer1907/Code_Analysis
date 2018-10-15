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
    cin>>n>>k;
    ll a[n];
    ll st=0,en=0;
    ll l=0,r=0;
    rep(i,0,n)
        cin>>a[i];
    rep(i,0,n)
    {
        if(!a[i])
            l=i+1,r=i+1;
        else{
            if(r-l+1>ans)
            {
                ans=r-l+1;
                st=l;
                en=r;
            }
            r++;
        }
    }
    if(!k)
    {
        cout<<ans<<endl;
        parr(a,n)
        return 0;
    }
    l=0,r=0;
    if(a[0]==0)
        k--;
    ans= max(ans,1LL);

    while(l<=r && r<n)
    {
//        cout<<l<<" "<<r<<" "<<k<<endl;
        if(k>=0)
        {
            r++;
            if(r>=n)
                break;
            if(a[r]==0)
                k--;
            if(k<0)
                continue;
            if(r-l+1>ans)
            {
                ans=r-l+1;
                st=l;
                en=r;
            }
        }
        else{
            if(a[l]==0)
                k++;
            l++;
            if(l>r && l<n)
            {
                r=l;
                if(a[l]==0)
                    k--;
            }
            else if(l>=n)
                break;
        }
    }
//    cout<<st<<" "<<en<<endl;
    cout<<ans<<endl;
    rep(i,0,n)
    {
        if(i>=st && i<=en)
            cout<<1<<" ";
        else cout<<a[i]<<" ";
    }
    return 0;
}
