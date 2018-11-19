#include <cstdio>

using namespace std;

struct password_t
{
    char s[ 3 ];

    void read()
    {
        scanf( "%s", s );
    }

    bool operator == ( const password_t &p ) const
    {
        return s[ 0 ] == p.s[ 0 ] && s[ 1 ] == p.s[ 1 ];
    }

    bool match_middle( const password_t &q0, const password_t &q1 ) const
    {
        return s[ 0 ] == q0.s[ 1 ] && s[ 1 ] == q1.s[ 0 ];
    }

} password, known[ 100 ]; unsigned n;

bool found()
{
    for( unsigned i = 0; i < n; i++ )
        if ( password == known[ i ] )
            return true;

    for( unsigned i = 0; i < n; i++ )
        for( unsigned j = 0; j < n; j++ )
            if ( password.match_middle( known[ i ], known[ j ] ) )
                return true;

    return false;
}

int main()
{
    password.read(), scanf( "%u", &n );

    for( unsigned i = 0; i < n; i++ )
        known[ i ].read();

    if ( found() )
        printf( "YES" );
    else
        printf( "NO" );
}
