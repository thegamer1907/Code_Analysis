#include <map>
#include <set>
#include <queue>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
#define R resize
#define ALL(x) (x).begin(),(x).end()
#define EB emplace_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<typename T>
void _D(T a) { cerr << a; }
template<typename T, typename... Args>
void _D(T a, Args... args) 
{ cerr << a << ' '; _D(args...); }
#ifdef DEBUG
#define debug(...) _D(__VA_ARGS__)
#else
#define debug(...)
#endif

int n;
string pas;
pair< int, int > pass;
vector< string > ilo;

inline pair< int, int > parse ( char a, char b )
{
    return { a - 'a', b - 'a' };
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> pas;
    cin >> n;
    ilo.R( n );
    for ( int i = 0; i < n; ++i )
        cin >> ilo[i];
    pass = parse( pas[0], pas[1] );
    bool fl = false;
    for ( int i = 0; i < n; ++i )
        for ( int k = 0; k < n; ++k )
            if ( pass == parse( ilo[i][1], ilo[k][0] ) )
                fl = true;
    for ( int i = 0; i < n; ++i )
        if ( pass == parse( ilo[i][0], ilo[i][1] ) )
            fl = true;
    cout << ( fl? "YES" : "NO" ) << '\n';
}