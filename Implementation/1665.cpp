#include <iostream>

using namespace std ;

int main () {
    string s ;
    cin >> s ;
    int ans = 1 ;
    if (s . size () < 7) {
        cout << "NO" ;
        return 0 ;
    }
    
    for (int i = 1 ; i < s . size () ; i ++) {
        if (s [i - 1] == s [i])
            ans ++ ;
        else
            ans = 1 ;
        
        if (ans >= 7)
            break ;
    }
    if (ans >= 7)
        cout << "YES" ;
    else
        cout << "NO" ;
    
    return 0 ;
}
