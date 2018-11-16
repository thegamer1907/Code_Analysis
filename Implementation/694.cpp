#include <iostream>
#include <algorithm>

using namespace std ;

int a [10000] ;

int main () {
    int n , k , ans = 0 , d ;
    cin >> n >> k ;
    for (int i = 0 ; i < n ; i ++)
        cin >> a [i] ;
    sort (a , a + n) ;
    d = a [n - k] ;
    for (int i = 0 ; i < n ; i ++)
        if (a [i] >= d && a [i] > 0)
            ans ++ ;
    cout << ans << "\n" ;
    return 0 ;
}
