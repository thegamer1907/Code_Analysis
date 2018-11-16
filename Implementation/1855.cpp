#include <iostream>

using namespace std ;

int main () {
    int n , a , b , c , ans = 0 , ans2 = 0 , ans3 = 0 ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i ++) {
        cin >> a >> b >> c ;
        ans += a ;
        ans2 += b ;
        ans3 += c ;
    }
    if (ans == 0 && ans2 == 0 && ans3 == 0)
        cout << "YES\n" ;
    else
        cout << "NO\n" ;
    return 0 ;
}
