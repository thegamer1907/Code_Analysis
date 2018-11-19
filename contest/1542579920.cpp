#include <bits/stdc++.h>

#pragma comment(linker, "/STACK: 102400000, 102400000")

#define abs(a)  ((a) > 0 ? (a) : (-a))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

#define rep(i, m, n)  for(register int i = (m), l = (n); i <= (l); ++i)
#define res(i, m, n)  for(register int i = (m), l = (n); i >= (l); --i)
#define edges(u)  for(register int i = head[u]; i; i = g[i].pre)

typedef class Io  {
public:
    inline void Init(std::string Pn)    {
        std::string In = Pn + ".in", Out = Pn + ".out";
        freopen( In.c_str(), "r", &_iob[0] );
        freopen( Out.c_str(), "w", &_iob[1] );
    }

    ~Io()  {
        fclose( &_iob[0] );
        fclose( &_iob[1] );
    }
} File;

template < class T >
inline short readIn ( T& x )  {
    static char ch;
    static short opt;
    opt = (ch != 45);
    while ( !isdigit ( ch = getchar () ) && (ch ^ -1) && ( ch ^ 45 ) );
    if ( ch == -1 )     return 0;
    if ( ch == 45 )     {   opt = 0; ch = getchar ();   }
    for ( x = -48 + ch; isdigit ( ch = getchar () ); ( x *= 10 ) += ch - 48 );
    opt ? 1 : x = -x;
    return 1;
}

template < class T >
inline void writeIn ( T x )  {
    static unsigned int top, t[25];
    if ( !x )  {    putchar ( 48 );  return;    }
    if ( x < 0 )  {     x = -x;  putchar ( 45 );    }
    while ( x )     t[ ++top ] = x % 10, x /= 10;
    while ( top )   putchar ( t[top--] + 48 );
}

inline int readStr( char* s )  {
    static int len;
    static char ch;
    len = 0;
    while((ch = (char) getchar()) == ' ' || ch == '\n');
    do s[len++] = ch; while((ch = (char) getchar()) != ' ' && (ch ^ 10) && (ch ^ -1));
    return len;
}

namespace FastIO  {
    const size_t str = 1 << 16;

    struct Reader  {
        char buf[str], *s, *t;
        Reader ( ) : s( ), t( ), buf() {    }
        inline char pick ( )  {
            return (s == t) ? ( t = buf + fread ( s = buf, 1, str , stdin ), *s++ ) : ( *s++ );
        }

        template < class T >
        inline Reader& operator >> ( T& x )  {
            static char ch;
            static short opt;
            opt = (ch != 45);
            while ( !isdigit ( ch = pick () ) && (ch ^ -1) && ( ch ^ 45 ) );
            if ( ch == -1 )     return *this;
            if ( ch == 45 )     {   opt = 0; ch = pick ();   }
            for ( x = -48 + ch; isdigit ( ch = pick () ); ( x *= 10 ) += ch - 48 );
            opt ? 1 : x = -x;
            return *this;
        }

    } cin;

    struct Writer  {
        char buf[str], *s, *t;
        Writer () : s ( buf ), t( buf + str ), buf ( ) {    }
        ~Writer () { fwrite( buf, 1, s - buf, stdout ); }

        inline void echo ( char c )  {
            ( s == t ) ? ( fwrite ( s = buf, 1, str, stdout ), *s++ = c ) : ( *s++ = c );
        }

        inline Writer& operator << ( long long x )  {
            if( !x ) return echo( 48 ), *this ;
            if ( x < 0 )  {  x = -x ; echo ( 45 ) ; }
            static int t[21], top;
            while ( x ) t[++top] = x % 10, x /= 10;
            while ( top ) echo(t[top--] + 48);
            return *this;
        }
        inline Writer& operator << (const char* s)  {
            while ( *s ) echo( *s++ ) ;
            return *this;
        }
    } cout;
    const char *endl = "\n";
}

using FastIO :: cin;
using FastIO :: cout;
using FastIO :: endl;

template<typename T>  
inline T pow(T a, T x)  {
    T rt = 1;
    //for( ; x; ((x & 1) ? rt *= a : rt), x >>= 1, a *= a );
    while(x) ((x & 1) ? rt *= a : rt), x >>= 1, a *= a;
    return rt;
}

template<typename T>  
inline T mul(T a, T x)  {
    T rt = 0;
    //for( ; x; ((x & 1) ? rt += a : rt), x >>= 1, a <<= 1 );
    while(x) ((x & 1) ? rt += a : rt), x >>= 1, a <<= 1;
    return rt;
}

const int N = 123456 ;

std :: map < std :: string , int > mapgo ;

int n, k, w ;
int a [N] [10],c [N], d [10];

inline void smax ( int& d, const int& x )  {
	if ( d < x )	d = x ;
}

int main ( )  {
    cin >> n >> k ;

    int qwe0 ( 0 ), qwe1 ( 0 ) ;

	rep ( i, 1, n )  {
        rep ( j, 1, k )  {
            cin >> a [i] [j] ;
            c [i] += a [i] [j] ;
            d [j] += a [i] [j] ;
            smax ( w, d [j] ) ;
        }

        qwe0 += ( c [i] == 0 ) ;
        qwe1 += ( c [i] == 1 ) ;
    }

    if ( w == n )  return puts ( "NO" ), 0 ;

    if ( qwe1 || qwe0 )  return puts ( "YES" ), 0 ;

    if ( k < 4 )	return puts ( "NO" ), 0 ;

    rep ( i, 1, n )  {
        std :: string ss = "" ;
        rep ( j, 1, k ) ss += char ( '0' + a [i] [j] ) ;
        ++ mapgo [ss] ;
    }

    return puts ( ( ( mapgo ["1100"] && mapgo ["0011"] ) || ( mapgo ["1010"] && mapgo ["0101"] ) || ( mapgo ["1001"] && mapgo ["0110"] ) ) ?  "YES"  : "NO" ), 0 ;
}
