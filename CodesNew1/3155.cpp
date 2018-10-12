#include<bits/stdc++.h>
using namespace std ;
int a[330002] , pre[330002] ;
int main () {
    int n , k ; scanf ( "%d %d" , &n , &k ) ;
    for ( int i = 1 ; i <= n ; i++ ) {
        scanf ( "%d" , &a[i] ) ;
        if ( a[i] == 0 ) pre[i]++ ;
        pre[i] += pre[i-1] ;
    }
    int fin = 0 , index = -1 ;
    for  ( int i = 1 ; i <= n ; i++ ) {
        int l = 1 , h = i , ans = -1 ;
        while ( l <= h ) {
            int m = (l+h)>>1 ;
            if ( pre[i]-pre[m-1] <= k ) {
                h = m - 1 ;
                ans = i-m+1 ;
            }
            else l = m+1 ;
        }
        if ( ans > fin ) {
            fin = ans ;
            index = i ;
        }
    }
    cout << fin << endl ;
    if ( index != -1 )
    for ( int i = index ; fin > 0 && i > 0 ; i-- , fin-- ) {
        a[i] = 1 ;
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        cout << a[i] << " " ;
    }
    cout << endl ;
    return 0 ;
}

