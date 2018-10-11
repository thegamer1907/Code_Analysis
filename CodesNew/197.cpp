#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define loope(i,a,b) for(ll i=a;i<=b;i++)
#define test() ull t;cin>>t;while(t--)
#define puu pair<ull,ull>
#define f first
#define s second
#define pb push_back
#define mkp make_pair
#define ins insert
#define Vint vector<int>
#define Vull vector<ull>
#define nl cout<<endl
#define sp cout<<" "
#define MOD 1000000007
#define all(x) x.begin(),x.end()

int main() 
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
    fastio();
    ll n,t;
    cin>>n>>t;
    vector<ll>a(n+5,0),cum(n+5,0);
    loop(i,1,n+1) 
    {
        cin>>a[i];
        cum[i] = cum[i-1] + a[i]; 
    }
    ll lp=0,rp=1,mx=0;
    while( lp <= rp )
    {
        if( cum[rp] - cum[lp] <= t )
        {
            mx = max(mx, rp-lp);
            rp++;
        }
        else
        {
            lp++;
        }
        if( rp > n )
            break;
    }
    cout<<mx,nl;
	return 0;
}