//nagashbek599327235




#include <bits/stdc++.h>
#define br  break
#define off  exit( 0 )
#define cn   continue
#define rt   return
#define un   unsigned
#define do   double
#define cr   char
#define st   string
#define sc   scanf
#define pr   printf
#define mk   make_pair
#define pb   push_back
#define pf   push_front
#define p_f  pop_front
#define p_b  pop_back
#define ff   first
#define ss   second
#define vec  vector
#define gcd  __gcd
#define pi   acos( -1 )
#define ll   long long
#define N    200005
#define M    100000000
#define I    1000000000000000000
#define en                 printf( "\n" )
#define sqr( a )           ( ( a ) * ( a ) )
#define all( c )           ( c ).begin(), ( c ).end()
#define rev( c )           reverse( all( c ) )
#define srt( c )           sort( all( c ) )
#define mxx( x, y, z )     max( x, max( y, z ) )
#define mnn( x, y, z )     min( x, min( y, z ) )
#define mxn( x, y, z )     max( x, min( y, z ) )
#define mnx( x, y, z )     min( x, max( y, z ) )
#define dist( x, y, z, c ) sqrt( sqr( x - z ) + sqr( y - c ) )
#define speed              ios_base::sync_with_stdio( 0 ), cin.tie( 0 ), cout.tie( 0 )
#define toprun             ios_base::sync_with_stdio( 0 ), cin.tie( 0 )
using namespace std;
ll n, m, a[ N ], mx, cnt, z;
int main()
{
	cin >> n >> m;
	for( int i = 1; i <= n; i ++ )
    {
        cin >> a[ i ];
        mx = max( mx, a[ i ] );
    }
	for( int i = 1; i <= n; i ++ )cnt += mx - a[ i ];
	if( cnt >= m )cout << mx << " ";
	else
    {
        z = m;
        z -= cnt;
        cout << mx + ( z / n ) + ( z % n != 0 ) << " ";
    }
	cout << mx + m;
}























