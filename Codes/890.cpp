#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long uLL;
typedef pair < int , int > ii;
const int inf = 1e9;
const LL INF = 1e18;
const int N = 1e5 + 5;
const int mod = 1000000007;
const double eps = 1e-8;
const double pi = acos( -1.0 );

int n , m , mx;
string s;
int cnt[ N ][ 30 ];

int main( int argc , char const *argv[] ) {
        ios_base :: sync_with_stdio(false); cin.tie(NULL);
        cin >> n >> m >> s;
        s = " " + s;
        for( int i = 1; i < s.size(); i++ ) {
                cnt[ i ][ 1 ] += cnt[ i-1 ][ 1 ] + ( s[i] == 'a' );
                cnt[ i ][ 2 ] += cnt[ i-1 ][ 2 ] + ( s[i] == 'b' );
        }
        //cout << cnt[3][1] << " " << cnt[3][2] << endl;
        for( int i = 1; i < s.size(); i++ ) {
                int lo = i , hi = s.size( )-1 , res = 0;
                while( lo <= hi ) {
                        int mid = (lo+hi) >> 1;
                        int a = cnt[ mid ][ 1 ] - cnt[ i-1 ][ 1 ];
                        int b = cnt[ mid ][ 2 ] - cnt[ i-1 ][ 2 ];
                        int len = mid-i+1;
                        if( a+m >= len || b+m >= len ) res = len , lo = mid+1;
                        else hi = mid-1;
                }
                //cout << "here : " << res << endl;
                mx = max( mx , res );
        }
        cout << mx << endl;
        return 0;
}






