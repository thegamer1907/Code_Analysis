#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

typedef long long llt;

const int MAXN = 2000000;

int N, K;
llt h[MAXN+2], d[MAXN+2];
llt pre_h[MAXN+2], pre_d;
int ans[MAXN+2];
int End[MAXN+2], cnt;

void init()
{
    scanf( "%d %d", &N, &K );
    for ( int i = 1; i <= N; ++i ) scanf( "%lld", &h[i] );
    for ( int i = 1; i <= K; ++i ) scanf( "%lld", &d[i] );
}

void solve()
{
    for ( int i = 1; i <= N; ++i ) pre_h[i] = pre_h[i - 1] + h[i];
    for ( int i = 1; i <= K; ++i )
    {
        pre_d += d[i];
        if ( pre_d >= pre_h[N] ) { pre_d = 0; End[++cnt] = i; }
    }
    if ( pre_d != 0 ) { pre_d = 0; End[++cnt] = K + 1; }
    cnt = 1;
    for ( int i = 1; i <= K; ++i )
    {
        pre_d += d[i];
        if ( i == End[cnt] ) { pre_d = 0; cnt++; continue; }
        int killed = upper_bound( pre_h + 1, pre_h + 1 + N, pre_d ) - pre_h - 1;
        ans[i] += killed;
    }
    for ( int i = 1; i <= K; ++i ) printf( "%d\n", N - ans[i] );
}

int main()
{
    init();
    solve();
    return 0;
}