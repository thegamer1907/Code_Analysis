#include <iostream>
#include <algorithm>
using namespace std;
int a[1024], b[1042], n, m;
int main () {
    cin >> n >> m;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> a[i];
    }
    for ( int i = 0 ; i < m ; i ++ ) {
        cin >> b[i];
    }
    if ( m >= 2 ) {
        cout << "YES\n";
    }else {

        for ( int i = 0 ; i < n ; i ++ ) {
            if ( a[i] == 0 ) { a[i] = b[0]; }
        }
        for ( int i = 0 ; i < n-1 ;i ++ ) {
            if( a[i] >= a[i+1] ) {
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
        return 0;

    }

    return 0;
}
