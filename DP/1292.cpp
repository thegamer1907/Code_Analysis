#include <iostream>
using namespace std ;
int n ;
const int mx = 105 ;
bool a[mx] ;
int dp[mx] , ans  , ans1;
int main ()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
        if(a[i] == 1) ans ++ ;
    }
    if(a[1] == 1) ans1 = dp[1] = -1  ;
    else ans1 = dp[1] = 1 ;
    for(int i = 2 ; i <= n; i++){
        if(a[i] == 1) dp[i]= max(-1 , -1 + dp[i - 1]) ;
        else dp[i] = max(1 , 1 + dp[i - 1]) ;
        ans1 = max(ans1 , dp[i]) ;
    }
    cout << ans1 + ans ;

}
