//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 200005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, Q;
int a[MAX];
int dp[MAX];
int mp[MAX];

int main()
{
    optimiza_io
    cin >> N >> Q;
    for( int i = 1; i <= N; i ++ )
        cin >> a[i];
    for( int i = N; i >= 1; i -- )
    {
        dp[i] = dp[i + 1];
        if( ! mp[a[i]] )
            dp[i]++;
        mp[a[i]] = 1;
    }
    while( Q -- )
    {
        int x;
        cin >> x;
        cout << dp[x] << "\n";
    }
    return 0;
}