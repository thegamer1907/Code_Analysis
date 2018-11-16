#include <cstdio> 
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <functional>
#include <cstring>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstddef>
#include <cmath>



typedef long long ll;
typedef std::vector< int > vi;

static inline 
vi& operator << (vi& v, int i){ v.push_back(i); return v; } 

vi G[ 1 << 14 ] ;

int N ;

int C[ 1 << 14 ] ;

int dfs(int v, int p, int color )
{
    int r = 0;
    if (color != C[v] )
        ++r;
    
    for(int u : G[v] )
    {
        if (u == p) continue; // a parent
        
        r += dfs( u, v, C[ v ] ) ;
    }
    
    return r;
}

int main(int argc, char * argv[] )
{
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
     
    scanf("%d", &N ) ;
    
    for(int i = 2; i <= N; ++i)
    {
        int p;
        scanf("%d", &p);
        G[ i ] << p ;
        G[ p ] << i ;
    }
    
    for(int i = 1; i<= N; ++i) 
    {
        scanf("%d", C + i ) ;
    }
    
    int ans = dfs(1, 0, 0 ) ;

    printf("%d\n", ans ) ;
    
    return 0;
}