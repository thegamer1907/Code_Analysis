#include <bits/stdc++.h>

using namespace std;

bool solvable( const bitset< 16 > &problem, const int q )
{
    for( int i = 0; i < q; i++ )
        if( problem[ i ] )
            for( int j = 0; j < q; j++ )
                if ( ! ( i & j ) && problem[ j ] )
                    return true;

    return false;
}

int main()
{
    int bit, i, j, k, n, q, x;  bitset< 16 > problem;

    cin >> n  >> k, q = 1 << k;

    for( i = 0; i < n; i++, problem[ x ] = 1 )
        for( x = j = 0; j < k; j++, x <<= 1, x |= bit )
            cin >> bit;

    if ( solvable( problem, q ) )
        cout << "YES";
    else
        cout << "NO";
}
