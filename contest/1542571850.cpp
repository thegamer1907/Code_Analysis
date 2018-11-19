#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double

using namespace std;

int main() {
    ios_base::sync_with_stdio( 0 );
#ifdef LOCAL
    freopen( "input.txt", "r", stdin );
    freopen( "output.txt", "w", stdout );
#endif // LOCAL
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    int f1 = h*3600 + m*60 + s;
    int f2 = m*60 + s;
    int f3 = s;
    t2 = t2 * 3600;
    t1 = t1 * 3600;
    int k = 0;
    for ( int i = min( t1, t2 ); i < max( t1, t2 ); i++ ) {
        if ( i == f1 ) k++;
    }
    t2 /= 3600;
    t2 *= 5;
    t1 /= 3600;
    t1 *= 5;
    t2 *= 60;
    t1 *= 60;
    for ( int i = min( t1, t2 ); i < max( t1, t2 ); i++ ) {
        if ( i == f2 ) k++;
    }
    t2 /= 60;
    t1 /= 60;
    for ( int i = min( t1, t2 ); i < max( t1, t2 ); i++ ) {
        if ( i == f3 ) k++;
    }
    if ( k == 3 || k == 0 ) cout<<"YES";
        else cout<<"NO";
    return 0;
}
