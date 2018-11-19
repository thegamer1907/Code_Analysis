#include<bits/stdc++.h>
using namespace std ;

const int N = (int)100 + 10 ;

char str[N] ;
char s[N][3] ;
bool done[N] ;

int main() {
//    freopen("input.txt" , "r" , stdin ) ;
    int n ;
    bool t = false , first = false ;
    scanf("%s" , str ) ;
    scanf("%d" , &n ) ;
    for( int i = 1 ; i <= n ; i++ ) {
        scanf("%s" , s[i] ) ;
    }
    for( int i = 1 ; i <= n ; i++ ) {
        if( strcmp( str , s[i] ) == 0 ) {
            t = true ;break ;
        }
    }
    for( int i = 1 ; i <= n ; i++ ) {
        if( str[0] == s[i][1] && str[1] == s[i][0] ) {
            t = true ;break ;
        }
    }
    for( int i = 1 ; i <= n ; i++ ) done[i] = false ;
    for( int i = 1 ; i <= n ; i++ ) {
        if( str[0] == s[i][1] && !done[i] ) {
            done[i] = true ;
            first = true ;
            break ;
        }
    }
    for( int i = 1 ; i <= n ; i++ ) {
        if( str[1] == s[i][0] && !done[i] ) {
            if( first ) {
                t = true ;
                break ;
            }
        }
    }
    printf("%s\n" , t ? "YES" : "NO" ) ;
    return 0 ;
}
