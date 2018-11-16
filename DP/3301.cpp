#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef pair<int,int> pii;

const int MAX_N = 1000006;

int len;
int memo[MAX_N];
int sum[MAX_N];
char str[MAX_N];

void kmp () {
    int sz = 0;
    for ( int i = 1; i < len; ++i ) {
        while ( sz > 0 and str[sz] != str[i] )
            sz = memo[sz-1];
        if ( str[sz] == str[i] ) ++sz;
        memo[i] = sz;
    }
}

int main () {

//    freopen ( "in.txt", "r", stdin );
//    freopen ( "out.txt", "w", stdout );

    scanf ( "%s", str );
    len = strlen ( str );

    kmp ();
    int aux = memo[len-1];
    while ( aux > 0 )
        sum[aux]++, aux = memo[aux-1];
    for ( int i = 1; i < len-1; ++i ) {
        if ( !sum[memo[i]] ) continue;
        sum[memo[i]]++;
    }

    int it = len;
    while ( it > 0 ) {
        if ( sum[it] > 1 ) break;
        --it;
    }

    str[it] = 0;
    if ( !it )
        printf ( "Just a legend\n" );
    else
        printf ( "%s\n", str );

    return 0;

}
