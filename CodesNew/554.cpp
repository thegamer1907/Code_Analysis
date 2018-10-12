#include <bits/stdc++.h>
using namespace std;

#define Fast_IO ios_base::sync_with_stdio(0); cin.tie(0);

typedef unsigned long long uLL;
typedef long long int LL;
const int N = 1e5 + 5;
const int inf = 1e9;
const LL INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-8;
const int MOD = 1000000007;

int n , q , a[ 10*N ];
int cnt[ 100*N+5 ] , f[ 100*N+5 ];
bool used[ 100*N ];

int main( int argc , char const *argv[] ) {
        Fast_IO;
        cin >> n;
        for( int i = 1; i <= n; i++ ) cin >> a[i] , cnt[ a[i] ]++;
        for( int i = 2; i <= 100*N; i++ ) {
                if( !used[i] ) {
                        for( int j = i; j <= 100*N; j += i ) {
                                used[j] = true;
                                f[i] += cnt[j];
                        }
                }
        }
        for( int i = 2; i <= 100*N; i++ ) f[i] += f[i-1];
        cin >> q;
        while( q-- ) {
                int l , r;
                cin >> l >> r;
                l = min( l , 100*N );
                r = min( r , 100*N );
                cout << f[r] - f[l-1] << endl;
        }
        return 0;
}






