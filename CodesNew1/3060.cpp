#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<string>
#include<list>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<map>
#include<set>
#include<deque>
#include<stack>

typedef long long lld;
typedef unsigned long long llu;
typedef unsigned int uint;

#define PI 3.14159265359
#define INFINITY ( 1 << 29 )
#define INFINITY_LONG ( 1LL << 50 )
#define OFFSET 32000
#define MODVAL 1000007
#define E 2.71828182845904523
#define MAX 300
#define ISDIGIT(c) ( (c) >= '0' && (c) <= '9' )
#define CHECK_BIT(n,i) ( ( n >> i ) & 1 )
#define CHECK_ODD(n) ( n & 1 )
#define CHECK_VOWEL_Ucase(c) ( (c) == 'A' || (c) == 'E' || (c) == 'I' || (c) == 'O' || (c) == 'U' )
#define CHECK_VOWEL_Lcase(c) ( (c) == 'a' || (c) == 'e' || (c) == 'i' || (c) == 'o' || (c) == 'u' )
#define SET(arr,v) memset( arr , v , sizeof(arr) )
#define pf printf
#define sf scanf

#define BUF 1048576

using namespace std;

class Reader {
    char buf[BUF], b; int bi, bz;
    
    void read() {
        if (bi==bz) { bi=0; bz = fread(buf, 1, BUF, stdin); }
        b = bz ? buf[bi++] : 0; }
    void skip() { while (b > 0 && b <= 32) read(); }
    
public:
    Reader(){ bi=bz=0; read(); }
    uint nextInt() {
        uint v = 0; for (skip(); b > 32; read()) v = v*10 + b-48; return v; }
};
        
lld f( char *s , int k )
{
    if( !k )
    {
        int i = 0;
        lld cn;
        lld res = 0;
        
        while( true )
        {
            for( cn = 0 ; s[i] == '0' ; i++ , cn++ );
            res += cn * ( cn + 1 ) / 2;
            
            for( ; s[i] == '1' ; i++ );
            
            if( !s[i] )
                return res;
        }
    }
    
    register int sp, ep;
    lld pre, post, coun;
    lld res = 0;
    
    for( coun = 0 , ep = 0 ; coun != k && s[ep] ; ep++ )
        coun += s[ep] == '1';
    
    if( coun != k )
        return 0;
    
    for( sp = 0 ; s[sp] == '0' ; sp++ );
    
    ep -= 1 ;
    pre = sp;
    
    while( true )
    {
        for( ep++ , post = 0 ; s[ep] == '0' ; ep++ , post++ );
        
        res += ( pre + 1 ) * ( post + 1 );
        
        if( !s[ep] )
            break;
        
        for( sp++ , pre = 0 ; s[sp] == '0' ; sp++ , pre++ );
    }
    
    return res;
}

int main()
{
    //freopen("c:\\a.txt","r",stdin); 
    
    char s[1000004];
    
    int k;
    
    sf("%d",&k);
    
    gets( s );
    gets( s );
    
    cout << f( s , k ) << endl;
        
    return 0;
}
