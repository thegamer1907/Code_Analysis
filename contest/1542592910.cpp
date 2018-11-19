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
const ll N = 1e5 + 1;
const ll mod = 1e9 + 7;
const long double eps = 1E-7;

char x, y;
char a, b;
int n, l, r;
int main()
{
    TIME;
    cin >> x >> y >> n;
    for( int i = 1; i <= n; i ++ )
    {
        cin >> a >> b;
        if( x == b )
            l = 1;
        if( y == a )
            r = 1;
        if( x == a && y == b )
            {
                cout << "YES";
                return 0;
            }
    }
    if( l + r == 2 )
        cout << "YES";
    else
        cout << "NO";
}
