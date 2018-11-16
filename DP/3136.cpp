#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
int n,m,i,j,suma,q,a,b,c,d;
char x;
int v[505][505],dp1[505][505],dp2[505][505];
int main()
{
    cin>>n>>m;
    for( i = 1 ; i <= n ; i++ )
    {
        for( j = 1 ; j <= m ; j++ )
        {
            cin>>x;
            v[ i ][ j ] = ( x == '.' );
        }
    }
    for( i = 1 ; i <= n ; i++ )
        for( j = 2 ; j <= m ; j++ )
            dp1[ i ][ j ] = ( v[ i ][ j - 1 ] && v[ i ][ j ] ) + ( dp1[ i - 1 ][ j ] + dp1[ i ][ j - 1 ] - dp1[ i - 1 ][ j - 1 ] );
    for( i = 2 ; i <= n ; i++ )
        for( j = 1 ; j <= m ; j++ )
            dp2[ i ][ j ] = ( v[ i - 1 ][ j ] && v[ i ][ j ] ) + ( dp2[ i - 1 ][ j ] + dp2[ i ][ j - 1 ] - dp2[ i - 1 ][ j - 1 ] );
    cin>>q;
    for( i = 1 ; i <= q ; i++ )
    {
        cin>>a>>b>>c>>d;
        suma = 0;
        if( c > a )
            suma += dp2[ c ][ d ] - dp2[ a ][ d ] - dp2[ c ][ b - 1 ] + dp2[ a ][ b - 1 ];
        if( d > b )
            suma += dp1[ c ][ d ] - dp1[ a - 1 ][ d ] - dp1[ c ][ b ] + dp1[ a - 1 ][ b ];
        cout<<suma<<'\n';
    }
    return 0;
}
