#include <bits/stdc++.h>

#define MAXN 100005

using namespace std;

int n, m, from, to, memo[MAXN];
string x;

int f( int i ) {

    if ( i < 0 ) {
        return 0;
    }

    if ( memo[i] != -1 ) {
        return ( memo[i] );
    }

    int Best = f(i-1);

    if ( i-1 >= 0 ) {
        if ( x[i] == x[i-1] ) {
            ++Best;
        }
    }

    memo[i] = Best;

    return ( Best );

}

int range_sum( int i, int j ) {
    return ( f(j) - f(i) );
}

int main( ) {

    cin >> x;

    cin >> m;

    n = x.size();

    //cout << x << endl;

    memset( memo, -1, sizeof(memo) );

    while ( m-- ) {
        cin >> from >> to;
        --from;
        --to;
        cout << range_sum( from, to ) << "\n";
    }

    return 0;

}
