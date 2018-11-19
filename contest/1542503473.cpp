#include<bits/stdc++.h>
using namespace std ;

int main( )
{
    vector < string > v ;
    string s ;
    int n ;
    cin >> s >> n ;

    for( int i = 0 ; i < n ;  i ++ )
    {
        string ss ;
        cin >> ss ;
        v.push_back( ss ) ;
    }

    for( int i = 0 ; i < n ; i++ )
    {
        string ss = "" ;
        for ( int j = 0 ; j < n ; j ++ )
        {
            ss = v[ i ] + v[ j ] ;
            if ( ss.find( s ) != -1 )
            {
                return !printf("YES\n") ;
            }
        }
    }
    printf("NO\n") ;
    return 0 ;
}
