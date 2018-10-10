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

ll count( ll n )
{
    ll cnt = 0;
    while( n > 0 )
    {
        if( n&1 )
            cnt++;
        n >>= 1;
    }
    return cnt;
}

int main() 
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
    fastio();
    ll n,m,x;
    cin>>n>>m;
    vector<ll>v;
    loop(i,0,n)
    {
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    double mx = 0.0;
    mx = max(mx, 1.0*v[0]);
    mx = max(mx, 1.0*(m - v[n-1]) );
    loop(i,1,v.size())
    {
        ll diff = v[i] - v[i-1];
        double req = (1.0*diff)/2;
        mx = max( mx, req);
    }
    cout<<fixed<<setprecision(8)<<mx;
	return 0;
}