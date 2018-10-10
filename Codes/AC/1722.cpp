#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define db double
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound 
#define pii pair<int , int>
#define pdd pair<double , double>
#define pll pair<long long int,long long int>
#define mod 1000000007
#define inf 7+1e18
#define eps 0.000001
#define endl '\n'
ll n,m,k;
inline ll bs(ll l,ll r)
{
    ll mid=(l+r)/2;
    if(l==r)
        return mid;
    ll f=0;
    for(ll i=1;i<=n;i++)
        f+=min((mid-1)/i,m);
    if(f>=k)
        return bs(l,mid);
    else
        return bs(mid+1,r);

}
int main()
{   
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "rt", stdin);
        freopen("output.txt", "wt", stdout);
    #endif
    cin>>n>>m>>k;
    ll x=(5e5)*(5e5);
    cout<<bs(1,x+1)-1;
} 