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
const ll N = 1e5 + 1;
const ll mod = 1e9 + 7;
const long double eps = 1E-7;

int n, x, mn, a[N];
int main()
{
    TIME;
    mn = INF; cin >> n;
    for( int i = 1; i <= n; i ++ )
        cin >> a[i], mn = min( mn, a[i] );
    x = (mn-1) / n * n;
    for( int h = 0; h < 2; h ++ )
    {
        for( int i = 1; i <= n; i ++ )
        {
            if( ++x > a[i] )
            {
                cout << i;
                return 0;
            }
        }
    }
}
