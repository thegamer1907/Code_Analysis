#include<bits/stdc++.h>
#define ll long long
#define ss string
#define pb push_back
#define rev(i,n) for(ll i=0;i<n;i++)
#define rev1(i,n) for(ll i=n-1;i>=0;i--)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(),v.end()
#define S second
#define F first
#define tci(v,i) for(auto i=v.begin();i!=v.end();i++)
#define MOD 1000000007
#define lld long double
#define TIMESTAMP cerr<<(((double)clock())/CLOCKS_PER_SEC)
#define  rep(i,start,lim) for(ll (i)=(start);i<(lim);i++)
using namespace std;
int32_t main()
{
    sync;
    ll m,n,k,ans;cin>>n>>m>>k;
    ll low=1,high=n*m,mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        ll s=0;
        rep(i,1,n+1)
        {
            s+=min(m,mid/i);
        }
//        cout<<s<<endl;
        if(s<k)
        {
            low=mid+1;
        }
        else
        {
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;

}
