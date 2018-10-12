#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define inf 1e20
#define ll long long
#define vll vector < ll >
#define vch vector < char >
#define vvll vector < vector < ll > >
#define prll pair < ll , ll >
#define MP make_pair
#define F first
#define S second
#define vprll vector < prll >
#define vvprll vector < vector < prll > >
#define mpll map < ll , ll >
#define mplb map < ll , bool >
#define PB push_back

ll a[10009] ;
ll n , m ;
map < string , bool > mp ;
int main ()
{
    
    cin >> n >> m ;
    ll sim = 0 ;
    for ( int i = 0 ; i < n + m ; i ++ )
    {
        string s ;
        cin >> s ;
        if ( mp[s] )
            sim ++ ;
        mp[s] = 1 ;
    }
    n -= (ll) floor (sim*1./2) ;
    m -= (ll) ceil (sim*1./2) ;
    if ( n > m )
        cout << "YES";
    else
        cout << "NO" ;
}