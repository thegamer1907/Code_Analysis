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
    ll n;
    cin>>n;
    ll a[n],max=1,count=1;
    f(i,0,n)
    {
        cin>>a[i];
    }
    f(i,1,n)
    {
        if(a[i]>a[i-1])
            count++;
        else
        {
            if(count>max)
                max=count;
            count=1;
        }
        if(count>max)
                max=count;
    }
    cout<<max<<endl;
}
