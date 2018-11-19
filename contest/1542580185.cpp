#include <bits/stdc++.h>

using namespace std;

int main( ) {

    string pass;
    cin >> pass;

    int n;
    cin >> n;

    vector< string > v;

    for( int i = 0; i < n; i ++ ) {
        string ss; cin >> ss;
        v.push_back( ss );
    }

    for( int i = 0; i < n; i ++ ) {
        string tmp = v[ i ];
        for( int j = 0; j < n; j ++ ) {
            tmp += v[ j ];
            for( int k = 0; k < tmp.size()-1; k ++ ) {
                if( pass[ 0 ] == tmp[ k ]  && pass[ 1 ] == tmp[ k + 1 ] ) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            tmp = v[ i ];
        }
    }

    cout << "NO" << endl;

    return 0;
}
