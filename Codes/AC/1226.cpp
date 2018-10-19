// Bismillahirrahmanir Rahim
//NAMOMIZARAHID
#include<bits/stdc++.h>
#define nl printf("\n")
#define sp printf(" ")

#define rep(i,a,b) for(i=a;i<=b;i++)
#define rev(i,a,b) for(i=a;i>=b;i--)

#define fil freopen("input.txt","r",stdin)

#define pf printf
#define sf scanf


using namespace std;

typedef long long l;
typedef unsigned long long ul;


// Ordered set> Finding nth position element in a set in logn complexity
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;



#define pi acos(-1.0)
#define mp make_pair
#define pb push_back
#define p_q priority_queue


int inline in()
{
    int x;
    sf("%d",&x);
    return x;
}
l inline lin()
{
    l x;
    sf("%lld",&x);
    return x;
}
void P(l x)
{
    pf("%lld",x);
}
void Pi(int x)
{
    pf("%d",x);
}

#define C(i) pf("Case %lld: ",i)
#define Ci(i) pf("Case %d: ",i)


typedef pair< l,l > pll;
typedef pair< string,l > psl;
typedef pair< l,string > pls;
typedef pair< string,string > pss;
typedef pair< char,l > pcl;
typedef pair< l,char > plc;

#define Inf 0x7f7f7f
#define Max 200000001
#define Min -100000000001
#define mod 1000000007

#define ms0(a) memset(a,0,sizeof(a))
#define ms1(a) memset(a,1,sizeof(a))
#define ms_1(a) memset(a,-1,sizeof(a))
#define DBG pf("I am here\n")


/***..........................................Template starts her....................................................***/


#define dis( a ,b ) abs( a - b )
#define dis2d( x1 ,y1 ,x2 ,y2 )    sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) )
#define dis3d( x1 ,y1 ,z1 ,x2 ,y2 ,z2 )    sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) + ( z1 - z2 ) * ( z1 - z2 ) )

#define valid(nx,ny,r,c) nx>=1&&nx<=r && ny>=1&&ny<=c

#define ck_bt( v , p ) ( ( v >> p ) & 1 )

char tochar( int x )
{
    return x + '0' ;
}

int toint( char x )
{
    return x - '0' ;
}

l fx[]= {0,0,-1,1,-1,-1,1,1};
l fy[]= {-1,1,0,0,-1,1,-1,1};

l dx[]= {0,0,-1,1};
l dy[]= {-1,1,0,0};

const double EulerConstant = exp(1.0);

l intlog(double base, double x)
{
    return (l)(log(x) / log(base));
}

bool isPrime( l val )
{
    if( val == 2 )
        return true ;
    if( val % 2 == 0 || val == 1 )
        return false ;
    l sqrt_N = (l) ( ( double ) sqrt( val ) ) ;
    for( l i = 3 ; i <= sqrt_N ; i += 2 )
    {
        if( val % i == 0 )
            return false ;
    }
    return true ;

}


bool prm[1000007];
l N= 1000000;

void sieve()
{
    prm[0] = 1 ;
    for( l i = 2 ; i <= N ; i ++ )
        prm[i] = 0 ;
    for( l i = 3 ; i * i <= N ; i += 2 )
    {
        if( prm[i >> 1] == 0 )
        {
            for( l j = i * i ; j <= N ; j += ( i << 1 ) )
            {
                prm[ j >> 1 ] = 1 ;
            }
        }
    }
}

l gcd(l a,l b)
{
    if(b == 0)
    {
        return a;
    }
    else
        return gcd(b, a % b);
}


/** Longest common multiplexer **/


l lcm(l a,l b)
{
    return (a*b)/gcd(a,b);
}

l fac( l d )
{
    l x = 1, i ;
    rep( i, 2, d )
    {
        x *= i ;
    }
    return x ;
}
/*
struct info
{
    l x,y,z;
    info() {};
    info(l _x, l _y,l _z) {x = _x; y = _y; z = _z;};

    bool operator < (const info &p) const
    {
		if(y == p.y) return x < p.x;
		else
			return y < p.y;
    }
}a[100010] , b[100010];
*/



#define rng 100010


l  n, m ;


bool vis[200010] ;

l dis[200010] ;


vector<l>V[200010], V1[200010] ;


/*
bool cmp( info aa , info bb )
{
    if( aa.p < bb.p  )
        return true ;
    return false ;
}
/*
bool cmp1( namira aa , namira bb )
{
    if( aa.u == bb.u  )
        return aa.v < aa.v ;
    else
        return aa.u < bb.u ;
}
*/
//l a[500010] ;
map<l, bool> namira ;

l ncr[100][100] ;


l NCR( l n, l r )
{
    if( n == r )
        return ncr[n][r] = 1 ;
    if( r == 1 )
        return ncr[n][r] = n ;
    if( r == 0 )
        return ncr[n][r] = 1 ;
    return ncr[n][r] = NCR( n - 1, r ) + NCR( n - 1, r - 1 ) ;
}

double expected[100010] ;

#define N1 5

struct Mat
{
    ul m[N1][N1] ;
};

Mat M, I ;

Mat MatMul( Mat A, Mat B )
{
    Mat ret ;
    l i, j, k ;
    rep( i, 1, 2 )
    {
        rep( j, 1, 2 )
        {
            ret.m[i][j] = 0 ;
            rep( k, 1, 2 )
            {
                ret.m[i][j] += ( ( A.m[i][k] * B.m[k][j] ) ) ;
            }
        }
    }
    return ret ;
}


Mat MatExp( Mat A, l p )
{
    if( p == 0 )
        return I ;
    Mat res = MatExp( A, p / 2 ) ;
    res = MatMul( res, res ) ;
    if( p & 1 )
        res = MatMul( A, res ) ;
    return res ;
}


struct info{
    l x , y ;
}a[200020];

bool cmp( info a , info b )
{
    if( a.x == b.x )
    {
        return a.y < b.y ;
    }
    else
    {
        return a.x > b.x ;
    }
}
bool cmp1( info a , info b )
{
    return a.x < b.x ;
}

l b[100010] ;

string s ;

map<string , l>ma ;

int main()
{

    l i, j, k ;


    //fil;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //pf("%d",'1'-48) ;
    //sf("%s",&s) ;6
    //n = strlen( s ) ;
    //clock_t startTime = clock


    n = lin() ;
    m = lin() ;

    j = 1 ;

    rep( i , 1 , n )
    {
        cin>> s ;
        if( ma[s] == 0 )
        {
            ma[s] = j ;
            j ++ ;
        }
    }

    l tot = 0 , tot2 = 0 ;

    rep( i , 1 , m )
    {
        cin>> s ;
        if( ma[s] == 0 )
        {
            ma[s] = j ;
            j ++ ;
            tot2 ++ ;
        }
        else
        {
            tot ++ ;
        }
    }
    l tot1 = ( n + m ) - ( tot * 2 + tot2 ) ;
    tot %= 2 ;
    if( tot )
    {
        if( tot1 >= tot2 )
        {
            puts("YES") ;
        }
        else
        {
            puts("NO") ;
        }
    }
    else
    {
        if( tot1 > tot2 )
        {
            puts("YES") ;
        }
        else
        {
            puts("NO") ;
        }
    }




    //cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
    return 0;
}