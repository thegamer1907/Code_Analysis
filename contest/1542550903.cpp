#include <bits/stdc++.h>

#define MAXN 100010

using namespace std;

int N, K, num[5];

bool mk[MAXN];

int main(){

//    freopen( "a.in", "r", stdin );

    ios_base::sync_with_stdio( false );
    cin.tie( 0 );

    cin >> N >> K;

    int lim = (1<<K);
    mk[lim-1] = true;

    bool ans = false;
    for ( int now, i = 1; i <= N; ++i ){
        now = 0;
        for ( int tmp, j = K-1; j >= 0; --j ){
            cin >> tmp;
            now += (tmp<<j);
        }
        for ( int j = 0; j < lim; ++j ){
            if ( mk[j] ){
                bool fit = true;
                for ( int l = 0; l < K; ++l )
                    if ( j&(1<<l) && now&(1<<l) )
                        fit = false;
                if ( fit ){
//                    printf( "%d %d\n", now, j );
                    ans = true;
                }
            }
        }
        mk[now] = true;
    }

    printf( "%s\n", (ans)?"YES":"NO" );

return 0;
}
