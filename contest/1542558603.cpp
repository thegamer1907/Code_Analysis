#include <bits/stdc++.h>

using namespace std;


class fast_iostream
{
protected:

    static size_t constexpr buffer_size = 4096;

    char buffer[ buffer_size ]; bool external_file; FILE *file; size_t position;

public:
     fast_iostream( const string &file_name, const string default_file_name,
                    FILE *default_file,  const char *mode ) :
         external_file( file_name != default_file_name ), position( 0 )
    {
        if ( external_file )
            file = fopen( file_name.c_str(), mode );
        else
            file = default_file;
    }

    ~fast_iostream()
    {
        if ( external_file )
            fclose( file );
    }
};

class fast_istream: public fast_iostream
{
    size_t size = 0;

public:

    inline bool is_eof()
    {
        if ( position == size )
        {
            position = 0, size = fread( buffer, 1, buffer_size, file );

            return size == 0;
        }

        return false;
    }

    inline int next_char()
    {
        return is_eof() ? -1 : buffer [ position++ ];
    }

    inline bool seek_eof()
    {
        int c = next_char();

        while ( c == ' ' || c == '\n' )
            c = next_char();

        if ( c == -1 )
            return true;

        assert( position != 0 ); position--; return false;
    }

    inline char read_char()
    {
        int c = next_char();

        while ( c == ' ' || c == '\n' )
            c = next_char();

        assert( c != -1 ); return ( char ) c;
    }

    inline void copy_word( char *s )
    {
        int c = read_char();

        while ( c != ' ' && c != '\n' && c != -1 )
            *( s++ ) = ( char ) c, c = next_char();
    }

    inline string read_string()
    {
        int c = read_char(); string s;

        while ( c != ' ' && c != '\n' && c != -1 )
            s += ( char ) c, c = next_char();

        return s;
    }

    template< typename T = int >
    void read_int( T &n )
    {
        int c = read_char(); T m; bool negative = false; n = 0;

        if ( c == '-' )
            negative = true;
        else if ( c != '+' )
                n = c - '0';

        for( c = next_char(); c != ' ' && c != '\n' && c != -1; c = next_char() )
            m = ( n <<= 1 ), n <<= 2, n += m, n += c, n -= '0';

        if ( negative )
            n = -n;
    }

    fast_istream( const string& file_name = "stdin" ): fast_iostream( file_name, "stdin", stdin, "r" ) {}

} fin;

template< typename T = int > void read_int( T& x ) { fin.read_int( x ); }

class fast_ostream: public fast_iostream
{
    bool line_flush; static bool local;

public:
    inline void flush()
    {
        fwrite( buffer, position, 1, file), position = 0;
    }

    inline void put_char( char c )
    {
        if ( position == buffer_size )
            flush();

        buffer[ position++ ] = c;
    }

    inline void put_c_str( const char *s )
    {
        while ( *s != 0 )
            put_char( *( s++ ) );
    }

    inline void write_string( const string &s, const char *after = " " )
    {
        put_c_str( s.c_str() ), put_c_str( after );
    }

    template< typename T >
    inline void write_int( T x, const char *after )
    {
        char s[ 100 ]; int n = 0;

        if ( x == 0 )
            put_char( '0' );
        else
        {
            if ( x < 0 )
                put_char( '-' ), x = -x;

            while ( x > 0 )
                s[n++] = (x % 10) + '0', x /= 10;

            reverse( s, s + n ), s[n] = 0; put_c_str( s );
        }

        put_c_str( after );
    }

    inline void write_endl()
    {
        put_char('\n');

        if ( line_flush && local )
            flush();
    }

    fast_ostream( const string& file_name = "stdout", bool lflush = true ) : fast_iostream(  file_name, "stdout", stdout, "w" ), line_flush( lflush )
    {
        memset( buffer, 0, buffer_size );
    }

    ~fast_ostream()
    {
        flush();
    }

} fout;

template< typename T > void write_int( const T x, const char *after = " " ) { fout.write_int( x, after ); }

bool fast_ostream::local = true;

int main()
{
   int n, k; read_int( n ), read_int( k );
   bool check[16] = {};
   bool right = false;
   vector< vector<int> > vec(16);
   for(int i = 0; i <= 15; i++)
       for(int j = 0; j <= 15; j++)
           if( (i & j) == 0)
             vec[i].push_back(j);

   for(int i = 0; i < n; i++)
   {
       int a, p, num2 = 0;

       for(int j = k -1; j >= 0; j-- )
           read_int( a ), num2 <<= 1, num2 |= a;

       check[num2] = 1, p = vec[num2].size();

       for( int j = 0; j < p; j++ )
           if( check[vec[num2][j]] )
                right = true;
   }

   if(right)
       cout << "YES";
   else
       cout << "NO";
   return 0;
}
