#include <iostream>

using namespace std;

int a [1000000] ;

int main(){
    int n , m ;
    cin >> n >> m ;
    for (int i = 1 ; i < n ; i ++)
        cin >> a [i] ;
    for (int i = 1 ; i <= n ; ) {
        if (i == m) {
            cout << "YES\n" ;
            return 0 ;
        }
        if (i > m) {
            cout << "NO\n" ;
            return 0 ;
        }
        i += a [i] ;
    }
    cout << "NO\n" ;
    return 0 ;
}
