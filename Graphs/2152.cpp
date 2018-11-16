//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 200005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, M;
queue < int > q;
bool vis[MAX];
int ans[MAX];
int main()
{
    optimiza_io
    cin >> N >> M;
    q.push( N );
    vis[N] = 1;
    while( ! q.empty() )
    {
        int x = q.front();
        q.pop();
        if( x == M )
        {
            cout << ans[x];
            return 0 ;
        }
        if( x * 2 <= 20000 && ! vis[x*2] )
        {
            vis[x*2] = true;
            ans[x*2] = ans[x] + 1;
            q.push( x*2 );
        }
        if( x-1 >= 1 && ! vis[x-1] )
        {
            vis[x-1] = 1;
            ans[x-1] = ans[x] + 1;
            q.push( x - 1 );
        }
    }
    return 0;
}
