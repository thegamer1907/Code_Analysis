//Resting_Prince
#include<bits/stdc++.h>
#define mod 1000000007
#define inf 1e18
#define PI 3.141592653589
#define fi first
#define se second 
#define sv(v) sort(all(v));reverse(all(v))
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define repr(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mk make_pair
#define en '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pll;
typedef long double ld;

int main()
{   ios;
    ll i,x,j,n,m,k,ans=0,l,o,a[200005];
    cin>>n>>m>>k;
    rep(i,0,n-1)cin>>a[i];
    sort(a,a+m);l=0;
    o=((a[0]-l-1)/k);
    rep(i,0,m-1)
    {
        j=0;//cout<<o<<": ";
        while(((a[i]-l-1)/k)==o)
        {
            i++;
            j++;
        }l=(j+l)%k;
        ans++;o=((a[i]-l-1)/k);i-=(j>0);
    }cout<<ans;
    return 0;
}