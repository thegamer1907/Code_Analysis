#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double

using namespace std;

int f[123456][5];
set <int> st;

int main() {
    ios_base::sync_with_stdio( 0 );
#ifdef LOCAL
    freopen( "input.txt", "r", stdin );
    freopen( "output.txt", "w", stdout );
#endif // LOCAL
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for ( int i = 0; i < n; i++ ) {
        int m  = 0;
        for ( int j = 0; j < k; j++ ) {
            cin>>f[i][j];
            if ( f[i][j] ) m += ( 1 << j );
        }
        st.insert( m );
    }
    for ( int i = 0; i < n; i++ ) {
        int cur = 0;
        for ( int j = 0; j < k; j++ ) {
            if ( f[i][j] ) cur += ( 1 << j );
        }
        if ( !cur ) {
            cout<<"YES";
            return 0;
        }
        for ( int j = 0; j < ( 1 << k ); j++ )
            if ( st.find(j) != st.end() && ( cur + j ) == ( cur ^ j ) ) {
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";
    return 0;
}
