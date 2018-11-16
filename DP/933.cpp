#include <bits/stdc++.h>

using namespace std ;

const int N = 1e2 + 5 ;
const int INF = 1e9 ;

int S , mx = -INF;
int n , a[N] , b[N] , dp[N] ;
int main(){

    ios_base::sync_with_stdio(0) ;
    cin >> n ;

    for ( int i = 1 ; i <= n ; i++ ){
            cin >> a[i] ;
            if ( a[i] == 1 ){
                    b[i] = -1 ;
                    S++ ;
            }
            else{
                    b[i] = 1 ;
            }
    }
    for ( int i = 1 ; i <= n ; i++ ){
            dp[i] = max( dp[i-1] + b[i] , b[i] ) ;
            mx = max ( dp[i] , mx ) ;
    }
    cout << S + mx ;
}
