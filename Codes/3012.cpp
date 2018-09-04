#include <bits/stdc++.h>
#include <math.h>
#define fr first
#define sc scanf
#define pf printf
#define se second
#define dl double
#define ll long long
#define pb push_back
#define mk make_pair
#define pr pair<int,int>
#define piip pair< pair<ll,ll>,ll >
#define fin(s) freopen( s, "r", stdin )
#define fout(s) freopen( s, "w", stdout )
#define TIME ios_base::sync_with_stdio(0)
using namespace std;

const ll INF = 1e9;
const ll N = 1e6 + 1;
const ll mod = 1e9 + 7;
const long double eps = 1E-7;

int mx;
char a[N];
bool b[N];
int n, z[N];
int l, r, t;
int main()
{
    TIME;
    sc( "%s", &a );
    n = strlen( a );
    for( int i = 1; i < n; i ++ )
    {
        if( i <= r )
            z[i] = min( r - i + 1, z[i-l] );
        while( i+z[i] < n && a[z[i]] == a[i+z[i]] )
            z[i] = 1 + z[i];
        if( i + z[i] - 1 > r )
            l = i, r = i + z[i] - 1;
/// ---------------------------------------------------------
        t = z[i];
        if( t+i == n )
            b[t--] = 1;
        mx = max( t, mx );
    }
    for( int i = mx; i > 0; i -- )
    {
        if( b[i] )
        {
            for( int j = 0; j < i; j ++ )
                cout << a[j];
            return 0;
        }
    }
    cout << "Just a legend";
}
