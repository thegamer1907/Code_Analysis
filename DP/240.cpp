#include<bits/stdc++.h>
using namespace std ;

const int N = 1e2 + 5 ;
const int INF = 1e9 ;

long long n , m , a[N] , b[N] ;
long long pairs ;
int main(){

    ios_base::sync_with_stdio(0) ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ ){
            cin >> a[i] ;
    }
    cin >> m ;
    for ( int i = 1 ; i <= m ; i++ ){
            cin >> b[i] ;
    }
    sort ( a + 1 , a + 1 + n ) ;
    sort ( b + 1 , b + 1 + m ) ;

    for ( int i = 1 ; i <= n ; i++ ){
            for ( int j = 1 ; j <= m ; j++ ){
                    if ( abs(a[i]-b[j]) <= 1 ){
                            b[j] = INF;
                            pairs++ ;
                            break  ;
                    }
            }
    }
    cout << pairs ;
}
