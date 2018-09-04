#include <iostream>
#include <vector>
#include <stdio.h>
#define ll long long int

using namespace std;

vector < ll > f, tms;
vector < bool > vis;

void init( ll n ){
    vis[0] = vis[1] = false;
    for( int i = 2 ; i <= n ; i++ ){
        if( !vis[i] ) continue;
        f[i] = tms[i];
        for( int j = 2 ; (i*j) <= n ; j++ ){
            f[i] += tms[i*j];
            vis[i*j] = false;
        }
    }
    for( int i = 1 ; i <= n ; i++ ){
        f[i] += f[i - 1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    vis.assign( 10000001, true );
    for( int i = 2 ; i <= 10000000 ; i++ ){
        if( !vis[i] ) continue;
        for( int j = 2 ; j*i <= 10000000 ; j++ ) vis[i*j] = false;
    }
    ll a, n, m, b;
    cin >> n;
    tms.assign( 10000001, 0 );
    vis.assign( 10000001, true );
    f.assign( 10000001, 0 );
    for( int i = 0 ; i < n ; i++ ){
        cin >> a;
        tms[a]++;
    }
    init( 10000000 );
    cin >> m;
    while( m-- ){
        cin >> a >> b;
        cout << (f[ min(10000000LL, b) ] - f[ min( 10000000LL, a - 1 ) ]) << '\n';
    }
    return 0;
}


