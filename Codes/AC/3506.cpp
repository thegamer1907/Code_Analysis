#include <bits/stdc++.h>
#define fr first
#define sc scanf
#define pf printf
#define se second
#define ll long long
#define pb push_back
#define mk make_pair
#define pr pair<ll,ll>
#define ld long double
#define piip pair< pair<ll,ll>,ll >

#define fin(s) freopen( s, "r", stdin )
#define fout(s) freopen( s, "w", stdout )
#define TIME ios_base::sync_with_stdio(0)
using namespace std;

const ll INF = 1e9;
const ll N = 3e1 + 1;
const ll mod = 1e9 + 7;
const long double eps = 1E-7;

ll n, l, r, m;
bool can( ll x )
{
    ll a = 0, b = 0, c = n;
    while( c > 0 )
    {
        a += min( x, c );
        c = max( 0ll, c - x );
        b += c / 10; c -= c / 10;
    }
    return a >= b;
}
int main()
{
    TIME;
    cin >> n;
    l = 1, r = n;
    while( l < r )
    {
        m = (l + r) / 2;
        if( can( m ) )
            r = m;
        else
            l = m + 1;
    }
    cout << l << endl;
}
