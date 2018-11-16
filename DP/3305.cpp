//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 1000005
#define MOD 1000000007
#define P 31
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

i64 N;
char s[MAX];
i64 hashi[MAX];
i64 pot[MAX];

i64 val( i64 l , i64 r )
{
    i64 ans = ( hashi[r] - ( hashi[l - 1] * pot[r - l + 1] ) ) % MOD;
    ans += MOD;
    ans %= MOD;
    return ans;
}

bool ok( i64 x )
{
    i64 tmp = val( 1 , x );
    for( i64 i = 2; i + x - 1 <= N-1; i ++ )
        if( val( i , i + x - 1 ) == tmp )
            return 1;
    return 0;
}

int main()
{
    optimiza_io
    cin >> s;
    N = strlen( s );
    for( i64 i = N; i >= 1; i -- )
        s[i] = s[i - 1];
    for( i64 i = 1; i <= N; i ++ )
        hashi[i] = ( ( P*hashi[i -  1] ) + ( s[i] - 'a' + 1 ) ) % MOD;
    pot[0] = 1;
    for( i64 i = 1; i <= N; i ++ )
        pot[i] = ( P * pot[i - 1] ) % MOD;
    i64 tam = 0;
    i64 idx = 2;
    while( 1 )
    {
        if( idx + tam > N-1 )
            break;
        if( val( 1 , tam + 1 ) == val( idx , idx + tam ) )
            tam++;
        else 
            idx++;
    }
    
    for( i64 i = tam; i >= 1; i -- )
        if( val( 1 , i ) == val( N - i + 1 , N ) )
        {
            for( i64 j = 1; j <= i; j ++ )
                cout << s[j];
            cout << "\n";
            return 0;
        }
    cout << "Just a legend\n";
    return 0;
}