#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
const int N = 1e6 + 5;

int k , l;
string s;
LL sum[ N ];
unordered_map <LL,LL> dp;
LL ans;

int main( int argc , char const *argv[] ) {
        cin >> k >> s;
        l = s.size();
        for( int i = 0; i < l; i++ ) {
                if( i == 0 ) sum[i] = ( s[i] - '0' );
                else sum[i] += sum[i-1] + ( s[i] - '0' );
                dp[ sum[i] ]++;
        }
        for( int i = 0; i < l; i++ ) {
                if( i == 0 ) ans += dp[k];
                else ans += dp[ k + sum[i-1] ];
                dp[ sum[i] ]--;
        }
        cout << ans << endl;
        return 0;
}







