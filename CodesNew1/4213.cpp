//I'm not in danger, I'm The Danger.    -Walter White
#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;++i)
#define rep1(i,n) for(ll i=n-1;i>=0;--i)
#define range(i,p,q) for(ll i=p;i<=q;++i)
#define tci(i,v) for(auto i=v.begin();i!=v.end();++i)
#define tci1(i,v) for(auto i=v.rbegin();i!=v.rend();++i)
#define all(v) v.begin(),v.end()
#define all1(v) v.rbegin(),v.rend()
#define pb push_back
#define f first
#define s second
#define sz size()
#define in insert
#define ve vector
#define pr pair<ll,ll> 
#define el "\n"
#define T() ll t;cin>>t;while(t--)
using namespace std;
typedef long long int ll;
int main()
{
    sync;
    ll n,q,c=0,d=0;cin>>n>>q;ve<ll> a(n),k(q),sum(n,0);
    rep(i,n)cin>>a[i];rep(i,q)cin>>k[i];sum[0]=a[0];
    range(i,1,n-1)sum[i]=sum[i-1]+a[i];
    rep(i,q)
    {
        c+=k[i];
        auto j = lower_bound(all(sum),c);
        if(j==sum.end()||(*j==sum.back()&&c>=*j))
        {
            ++d;c=0;
            cout<<n<<el;
        }
        else
        {
            if(c==*j)
            cout<<n-((j-sum.begin())+1)<<el;
            else cout<<n-((j-sum.begin()))<<el;
        }
    }
    return 0;
}