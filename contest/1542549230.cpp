#include <bits/stdc++.h>
#define ll long long
#define MP make_pair 
#define PB push_back
#define N 500009
#define MOD 1000000007
#define f first 
#define s second 
#define wt(x) cout << # x <<" = " << x << endl 
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl "\n"
#define ld long double
#define inf 1e12
using namespace std;
void read(bool out = 0){
#ifndef ONLINE_JUDGE
    freopen("in", "rt", stdin);
    if(out)
    freopen("out", "wt", stdout);
#endif
}

int main () 
{
    string pass ;
    cin >> pass ;
    int n ;
    cin >> n ;
    bool equal = false ;
    bool ff = false ;
    bool fs = false ;
    bool sf = false ;
    bool ss = false ;
    while ( n -- )
    {
        string s ;
        cin >> s ;
        if ( s == pass ) equal = 1 ;
        if ( s[0] == pass [1] ) sf = 1;
        if ( s[1] == pass [0] ) fs =1 ;
    }
    if ( equal ) cout << "YES" ;
    else if ( sf && fs )cout <<"YES";
    else cout <<"NO" ;
}