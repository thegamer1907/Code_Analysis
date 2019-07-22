/*
   THE DARK NIGHT RISES
I LOVE YOU 72 AND WILL FOREVER DO SO
Patience, Persistence, Perseverance, Passion, Purpose
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int N = 2e5 + 20 ;
#define F first
#define S second
# define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define mk make_pair
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define sz(x)       (int)x.size()
const long long int mod=1e9 + 7;
const long double EPS=1e-12;
#define mem( a, val ) memset(a, val, sizeof( a ) )
#define deci( x ) cout<<fixed<<setprecision( x );
#define bitcount( x ) __builtin_popcountll( x )

const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int solve()
{
    ll n , m , k ;
    cin >> n >> m >> k ;
    std::vector<ll> v(m);
    rep(i,0,m) cin >> v[i] ;
    sort(all(v));
    ll ans = 0 ;
    bool flag = true ;
     ll st =0 , end = 0 ;
    for(int i = 0 ; i < m ; )
    {


       // cout << i << " " << st << " " << end << endl ;
       //  cout << st << " " << end << endl ;
         if(v[i] <= end && v[i] >= st && i < m)
         {
            ll cnt = 0 ;
             while(v[i] <= end && v[i] >= st && i < m)i++,cnt++ ;
             end += cnt ;
            ans++ ;
        }
        else flag = true ;
        if(i >= m) break ;
        if(flag)
        {

             st = end +1 ;
             end = st + k-1 ;
             if(v[i] > end ) 
             {
                st += ((v[i]-end)/k)*k ;
                end = st +k-1 ;
             }
             flag = false ;
         }

        
    }
    cout << ans ;


}
int main()
{
    fast;
    ll t;
    t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
// Patience, Persistence, Perseverance, Passion, Purpose
// I LOVE YOU 72 AND WILL FOREVER DO SO.