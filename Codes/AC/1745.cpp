#include<bits/stdc++.h>
using namespace std ;
long long check ( long long x , long long n , long long m ) {
    long long ret = 0 ;
    for ( int i = 1 ; i <= n ; i++ ) {
        ret += min ( m , x/i ) ;
    }
    return ret ;
}
int main () {
    long long n , m , k , l , h , ans ;
    scanf ( "%I64d %I64d %I64d" , &n , &m , &k );
    l = 1 ; h = n*m ;
    while ( l <= h ) {
        long long mid = (l+h)>>1 ;
        if ( check(mid,n,m) >= k ) {
            ans = mid ;
            h = mid-1 ;
        }
        else l = mid+1 ;
    }
    cout << ans << endl ;
    return 0 ;
}
