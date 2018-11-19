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

int h, m, s, t, t2;
bool fl = false;

inline bool godziny( int l, int p )
{
    if ( m == 0 and s == 0 )
    {
        return l != h and p != h;
    }
    return l != h or ( h + 1 == 13? p != 1 : p != h + 1 );
}

inline bool minuty ( int l, int p )
{
    if ( l == 12 )
        l = 0;
    if ( p == 1 and m == 0 )
        return false;
    return !( l * 5 <= m and m <= p * 5 );
}

inline bool sekundy ( int l, int p )
{
    if ( l == 12 )
        l = 0;
    if ( p == 1 and s == 0 )
        return false;
    return !( l * 5 <= s and s <= p * 5 );
}

inline void foo ( int v, int oj )
{
    debug( v, '\n' );
    if ( v == t2 )
    {
        fl = true;
        return;
    }
    int p = v + 1;
    if ( p == 13 )
        p = 1;
    int l = v - 1;
    if ( l == 0 )
        l = 12;
    if ( l != oj )
    { 
        if ( minuty( l, v ) and godziny( l, v ) and sekundy( l, v ) )
            foo( l, v );
    }
    if ( p != oj )
    {
        if ( minuty( v, p ) and godziny( v, p ) and sekundy( v, p ) )
            foo( p, v );
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> h >> m >> s >> t >> t2;
    if ( s != 0 and m % 5 == 0 )
        ++m;
    foo( t, t );
    cout << ( fl? "Yes" : "No" ) << '\n';
}