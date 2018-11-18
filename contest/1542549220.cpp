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

bool bit [N] [10] ;
ll n , k ;

struct node 
{
    node * ch [ 2] ;
    node () 
    {
        memset ( ch , 0 , sizeof ch );
    }
}*root;


void insert ( int ind )
{
    node * tmp = root ;
    for ( int i =0 ; i < k ; i ++ )
    {
        int nxt = bit [ind] [i]; 
        
        if (!tmp -> ch [nxt] ) tmp ->ch [nxt] = new node () ;
        tmp = tmp -> ch [nxt]; 
    }
}


bool dfs  ( ll ind , ll lvl = 0 , node * tmp = root)
{
    if ( lvl == k)return 1 ;
    
    bool ans = 0 ;
    
    if ( bit [ind] [lvl] ) 
    {
        if ( tmp->ch [0] )ans |= dfs ( ind , lvl+1 , tmp-> ch [0] );
    }
    else 
    {
        if ( tmp->ch [0] )ans |= dfs ( ind , lvl+1 , tmp-> ch [0] );
        if ( tmp->ch [1] )ans |= dfs ( ind , lvl+1 , tmp-> ch [1] );  
    }
    return ans ;
}

int main () 
{
    read () ;
    
    root = new node () ;
    cin >> n >> k ;
    for ( int i =0 ; i < n ; i ++ )
    {
        for ( int j =0 ; j < k ; j ++ ) 
            cin >> bit [i] [j] ;
    }
    

    
    
    for ( int i =0 ; i < n ; i ++ )
    {
        insert ( i );
    }
    
    bool done = 0 ;
    for ( int i  =0 ; i < n ; i ++)
    {
        done |= dfs ( i );
    }
    
    if ( done ) cout <<"YES";
    else cout <<"NO" ;
    
}