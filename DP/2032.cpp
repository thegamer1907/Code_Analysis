#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define start ll t; cin>>t; while(t--)
# define lp(i,a,b) for(i=(a);i<(b);++i)
#define fush cin.ignore(1000, '\n');
int main() 
{
    fast;
    ll n,m;
    cin>>n>>m;
    ll a[100001];
    ll i;
    lp(i,0,n)
    {
        cin>>a[i];
    }
    ll b[100001];
    set<ll>st;
    for(i=n-1;i>=0;--i)
    {
        st.insert(a[i]);
        b[i]=st.size();
    }
    while(m--)
    {
        ll x;
        cin>>x;
        cout<<b[x-1]<<endl;
    }
    return 0;
}