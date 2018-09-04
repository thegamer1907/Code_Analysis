#if 1
#include <cstdio>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cctype>
#include <cassert>
#include <ciso646>
#include <climits>
#include <cmath>


#include <algorithm>
#include <utility>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <deque>
#include <bitset>

using namespace std;
typedef long long ll;
typedef std::pair< int, int > pii;
typedef std::vector< int > vi;
typedef std::vector< pii > vii ;
#define fi first
#define se second
#define all(x)  (x).begin(), (x).end()
#define fore(i,a,b)  for(int i = (a), vzq_b = (b); i < vzq_b; ++i)
#define forn(i, n)  fore(i,0,n)

#define sz(x)   ( (int)((x).size())  )


double const EPS = 1.0E-9 ;
int const MOD    = (int)1e9 + 7 ;
inline int read( char*   s ){  return scanf("%s", s) ; } 
inline int read(int&x){  return scanf("%d", & ( x ) ); }
inline int read(ll&x){ return scanf("%lld",&x); }
inline int read(double &x){ return scanf("%lf", &x); }

inline int write(int x) { return printf("%d", x); }
inline int write(ll x ) { return printf("%lld", x); }
inline int write(double x){ return printf("%.12f",x); }
inline int write(char c){ putchar(c); }
inline int write(){return 0;}
inline int write(const char* s ) { return printf("%s", s); }
inline int write(std::string const&s){ return write(s.c_str()) ; }
template< typename T> int write(std::vector<T> const& v ) {
    int z = v.size();
    forn( i, z - 1 )
    {
        write(v[i]);
        write(' ');
    }
    if ( z > 0 )
        write( v[ z - 1 ] );
    return z;
}


template< typename ...T> int read(T&...args){  
    using swallow = int[];
    swallow w = { 0, ( read(args) ) ... } ;
    return sizeof( w ) / sizeof( w [ 0 ] ) - 1;
}
template< typename T > int read(std::vector<T>&v){
    for(T& t: v ) read(t);
    return  v.size();
}

template< typename ...T > int write(T const& ... args ){
    using swallow = int [];
    swallow  w = { 0, ( write(args), write(' ')) ... } ;
    return sizeof(w) / sizeof( w[0] ) - 1;
}

template< typename ...T >int writeln(T const& ... args ) {
    int r = write(args ... ) ;
    printf("\n");
    return r + 1;
}



inline ll gcd(ll x,ll y) { return y == 0 ? x : gcd(y, x%y); }
inline ll lcm(ll x, ll y){ return x == 0 && y == 0  ? 0 : x/gcd(x,y) * y; }
inline ll powmod(ll x, ll n, ll m = MOD ) {
    ll r = 1;
    while(n){
        if (n&1) r = (r*x)%m;
        x = (x*x)%m;
        n/=2;
    }
    return r;
}

static int leap(int y){  return y % 4 == 0 && y% 100 != 0  || y % 400 == 0 ; }

static int const month[ 2 ][ 12 ] = 
{ 
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};
  
#endif 

int solve();
int main(int argc, char * argv[] ) 
{
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
#endif //end online-judge    
  
    solve();
    return 0;
}


/********************************************************/
static const int maxn = 100005 ;
static const int maxm = 1 << 22 ;
static const int P = 998244353 ; 
static const ll LL_INF  = 1234567890123456789 ;// ~10^18
   
int n, ans;

int solve()
{ 
    
    read(n);
    
    for(int i= 1; n > 0; ++i)
    {
        int m = i, d = 0;
        do d += m%10; while(m/=10);
        if (d == 10){
            --n;
            if (n ==0 )return writeln(i);
        }
    }
    return 0;
}