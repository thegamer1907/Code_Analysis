#include<bits/stdc++.h>
using namespace std ;
#define ll long long
const int N = 1e5 + 5 ;
int n  , s , a[ N ]    ;
ll ans ;
int main(){

 scanf("%d %d" , &n , &s ) ;

 for(int i = 1 ; i <= n ; i++ )
    scanf(" %d" , a + i ) ;

 int l = 0 , h = n ;

 while( l < h ){
    vector < ll > v ;
    int mid = (l  + h + 1 ) >> 1 ;

    for(int i = 1 ; i <= n ; i++ )
        v.push_back( a[ i ]+ (1LL* i * mid)  ) ;

    sort(v.begin() , v.end() ) ;
    ll cost = 0 ;

    for(int i = 0 ; i < mid ; i++ )
        cost += v[ i ] ;

    if( cost <= s ){
    ans = cost ;
    l = mid ;
    }
    else
    h = mid - 1 ;
 }

 printf("%d %lld" , l  , ans  ) ;

}
