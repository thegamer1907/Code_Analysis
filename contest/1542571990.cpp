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
#define debug(...)1
#endif

int n, k;
vector< int > tab;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    tab.resize( n );
    bool fl = false;
    for ( int i = 0; i < n; ++i )
    {
        for ( int l = 0; l < k; ++l )
        {
            int p; cin >> p;
            tab[i] |= ( p << l );
        }
    }
    vector< int > ilo( 1 << k );
    for ( int i = 0; i < n; ++i )
        ++ilo[tab[i]];
    for ( int i = 0; i < ( 1 << k ); ++i )
        for ( int j = 0; j < ( 1 << k ); ++j )
            if ( ( i != j and ilo[i] and ilo[j] ) or ( i == j and ilo[i] > 1 ) )
            {
                if ( ( j & i ) == 0 )
                    fl = true;
            }
    if ( ilo[0] )
        fl = true;
    cout << ( fl? "Yes" : "No" ) << '\n';
}