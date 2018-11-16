#include <bits/stdc++.h>

#define MAXN 105

using namespace std;

int n, cnt, maxu, a[MAXN];

int calc( int i, int j ) {

    int ret = cnt;

    while ( i <= j ) {
        if ( a[i] ) {
            --ret;
        }else {
            ++ret;
        }
        ++i;
    }

    return ( ret );

}

int main( ) {

    cin >> n;

    for ( int i = 1; i <= n; ++i ) {
        cin >> a[i];
        if ( a[i] == 1 ) {
            ++cnt;
        }
    }

    for ( int i = 1; i <= n; ++i ) {
        for ( int j = i; j <= n; ++j ) {
            maxu = max( maxu, calc(i,j) );
        }
    }

    printf( "%d\n", maxu );

    return 0;

}
