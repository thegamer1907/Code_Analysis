#include <bits/stdc++.h>

using namespace std;

int mark[ 100100 ];
vector< int > values;

int main( ) {

    int n, k; cin >> n >> k;

    bool ok = false;

    for( int i = 0; i < n; i ++ ) {
        int val = 0;
        for( int j = 0; j < k; j ++  ) {
            int x; cin >> x;
            val |= ( x << j );
        }
        if( !mark[ val ] ) values.push_back( val );
        mark[ val ] = 1;
    }

    int Size = int( values.size( ) );

    for( int i = 1; i < ( 1 << Size); i ++ ) {
        int cnt[ 5 ] = { };
        for( int j = 0; j < Size; j ++ ) {
            if( i & ( 1 << j ) ) {
                for( int l = 0; l < k; l ++ ) {
                    cnt[ l ] += ( values[ j ] & ( 1 << l ) ) ? - 1 : 1;
                }
            }
        }
        bool ok = true;
        for( int j = 0; j < k; j ++ ) {
            if( cnt[ j ] < 0 ) {
                ok = false;
                break;
            }
        }
        if( ok ) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
