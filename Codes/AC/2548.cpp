#include <bits/stdc++.h>
#define fr first
#define sc scanf
#define pf printf
#define se second
#define ll long long
#define pb push_back
#define mk make_back
#define pr pair< int,int >
#define fin(s) freopen( s, "r", stdin )
#define fout(s) freopen( s, "w", stdout )
#define TIME ios_base::sync_with_stdio(0)
using namespace std;

const ll INF = 2e18;
const ll N = 1e7 + 1;
const ll mod = 1e9 + 7;
const long double ueps = 1E-7;

ll c[N];
bool p[N];
ll n, x, y;
ll a[N], d[N];
int main()
{
    TIME;
    cin >> n;
    for( int i = 1; i <= n; i ++ )
        cin >> x, c[x] ++;
    for( int i = 2; i < N; i ++ )
    {
        d[i] = d[i-1];
        if( !p[i] )
            for( int j = i; j < N; j += i )
                d[i] += c[j], p[j] = 1;
    }
    cin >> n;
    for( int i = 1; i <= n; i ++ )
    {
        cin >> x >> y;
        y = min( N-1, y );
        if( x >= N )
            cout << 0 << endl;
        else
            cout << d[y] - d[x-1] << endl;
    }
}
