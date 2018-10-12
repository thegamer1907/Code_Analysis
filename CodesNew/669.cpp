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
ll t=1 ;
ll gcd( ll a , ll b )
{
    if( b == 0 )
        return a ;
    else
        return gcd( b , a % b ) ;
}
void solve()
{
    set< string > polandball , enemyball , common ;
    ll n , m ;
    string s ;
    cin >> n >> m ;
    rep( i , 1 , n + 1 + m )
    {
        cin >> s ;
        if( i <= n )
            polandball.insert( s ) ;
        else
        {
            if( present( polandball , s ) )
            {
                polandball.erase( s ) ;
                common.insert( s ) ;
            }
            else
                enemyball.insert( s ) ;
        }
    }
    ll i = 1 ;
//    cout << sz( common ) << ' ' << sz( polandball ) << " " << sz( enemyball) << "\n" ;
    while(1)
    {
        s = "" ;
        if( sz( common ) > 0 )
        {
            s = *common.begin() ;
            common.erase( s ) ;
        }
        if( i % 2 )
        {
            if( s == "" )
            {
                if( sz( polandball ) > 0 )
                {
                    s = *polandball.begin() ;
                    polandball.erase( s ) ;
                }
                else
                {
                    cout << "NO" ;
                    return ;
                }
            }
        }
        else
        {
            if( s == "" )
            {
                if( sz( enemyball ) > 0 )
                {
                    s = *enemyball.begin() ;
                    enemyball.erase( s ) ;
                }
                else
                {
                    cout << "YES" ;
                    return ;
                }
            }
        }
        i++ ;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
