//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 105
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

string s;
int N;
bool vis[MAX][1005];

void dp( int x , int sum , int dig )
{    
    if( sum % 8 == 0 && dig )
    {
        cout << "YES\n";
        cout << sum << "\n";
        exit( 0 );
    }
    if( x == N ) 
        return;
    if( sum > 999 )
        return;
    if( vis[x][sum] )
        return;
    vis[x][sum] = 1;
    dp( x + 1 , sum , dig );
    int val = s[x] - '0';
    dp( x + 1 , ( 10*sum ) + val , dig + 1 );
}

int main()
{
    optimiza_io
    cin >> s;
    N = s.size();
    dp( 0 , 0 , 0 );
    cout << "No\n";
    return 0;
}