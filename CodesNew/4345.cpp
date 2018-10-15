#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
#define rep(i,a,b) for(ll i=a;i<b;i+=1)
#define rrep(i,a,b) for(ll i=a;i>b;i-=1)
#define vi vector<ll>
#define vii vector<vector<ll> >
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define sz(a) int((a).size())
#define tr(c,i) for( typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define mp make_pair
#define hell 1000000007
#define F first
#define S second
#define pii pair< ll , pair< ll , ll > >
#define M_PI           3.14159265358979323846
ll t=1 , tt ;
void solve()
{
    ll n , ans = 0 ;
    cin >> n ;
    string s ;
    vector< string > v ;
    rep( i , 1 , n + 1 )
    {
        cin >> s ;
        v.pb( s ) ;
    }
    for( ll i = n - 2 ; i >= 0 ; i-- )
    {
        if( v[ i ] < v[ i + 1 ] )
            continue ;
        ans = 0 ;
        rep( j , 1 , min( sz( v[ i ] ) , sz( v[ i + 1 ] )  ) )
        {
            if( v[ i ][ j ] <= v[ i + 1 ][ j ] )
                ans++ ;
            else
                break ;
        }
        //cout << v[ i ].substr( 0 , ans + 1 ) << " " ;
        v[ i ] = v[ i ].substr( 0 , ans + 1 ) ;
    }
    rep( i , 0 , n )
        cout << v[ i ] << "\n" ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen( "input.txt" , "r" , stdin ) ;
    //freopen( "output.txt" , "w" , stdout) ;
    //cin >> t ;
    tt = t ;
    while(t--)
        solve();
    return 0;
}
