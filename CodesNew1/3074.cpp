#include <bits/stdc++.h>
using namespace std;

/**
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>

using namespace __gnu_pbds;

typedef tree<int,null_type,less <int>,rb_tree_tag,tree_order_statistics_node_update>ind_set;
*/

#define ll long long
#define vec vector <int>
#define vecl vector <long long>
#define rep(i,a,b) for (ll i=a;i<b;i++)
#define pb push_back
#define pii pair <int,int>
#define pll pair <long long,long long>
#define mp make_pair
#define ff first
#define ss second
#define maa 1000000007

ll n,k;
string s;
void solve()
{
    cin>>k>>s;
    n=s.length();
    vecl x;
    x.pb(-1);

    rep(i,0,n)
    {
        if(s[i]=='1')
        {
            x.pb(i);
        }
    }
    x.pb(n);
    ll ans=0;
    if(k==0)
    {
        rep(i,0,x.size()-1)
        {
            ans+=((x[i+1]-x[i]-1)*(x[i+1]-x[i]))/2;
        }
        cout<<ans<<"\n";
        return;
    }
    ans=0;
    rep(i,0,x.size()-k-1)
    {
        ll ss=x[i]+1;
        ll se=x[i+1];
        ll es=x[i+k];
        ll ee=x[i+k+1];
        ans+=(se-ss+1)*(ee-es);
    }
    cout<<ans<<"\n";
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

/// freopen("input.txt","r",stdin);
/// freopen("output.txt","w",stdout);

    int t=1;
    ///cin>>t;
    rep(a,0,t)
    {
        //cout<<"Case #"<<a+1<<": ";
        solve();
    }
    return 0;
}
