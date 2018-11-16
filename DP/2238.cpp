#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define f(i,x,n) for(ll i=x;i<n;i++)
#define fl(i,x,n) for(ll i=n;i>=x;i--)
#define MOD (ll)1e9+7
#define print(x) cout<<x<<endl
#define vec vector<ll>
#define pai pair<ll, ll>
#define itr(it) :: iterator it
using namespace std;

       ///////////   ///     ///   ///      ///   ////////////  ///      ///
       ///           ///     ///   ///      ///   ///      ///  ///      ///
       ///           ///     ///   ///      ///   ///      ///  ///      ///
       ///////////   ///////////   ///      ///   ////////////  ////////////
               ///   ///     ///   ///      ///   ///      ///  ///      ///
               ///   ///     ///   ///      ///   ///      ///  ///      ///
       ///////////   ///     ///   ////////////   ////////////  ///      ///

signed main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[n],x;
    f(i,0,n)
    {
        cin>>a[i];
    }
    set<ll> s;
    fl(i,0,n-1)
    {
        s.insert(a[i]);
        b[i]=s.size();
    }
    f(i,0,m)
    {
        cin>>x;
        cout<<b[x-1]<<endl;
    }

}
