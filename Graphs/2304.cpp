#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define f(i,x,n) for(ll i=x;i<n;i++)
#define fl(i,x,n) for(ll i=n;i>=x;i--)
#define MOD (ll)1e9+7
#define print(x) cout<<x<<endl
#define vec vector<ll>
#define pair pair<ll, ll>

using namespace std;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll a[n],max=0,j=0;
    f(i,0,n)
    {
        cin>>a[i];
    }
    f(i,0,n)
    {
        ll ans=1;
        j=a[i];
        while(j!=-1)
        {
            j=a[j-1];
            ans++;
        }
        if(ans>max)
            max=ans;
    }
    cout<<max<<endl;
}