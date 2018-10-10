#include <bits/stdc++.h>
using namespace std;

typedef long long  int ll ;
const int mx = 1e7 + 10;

int num[mx];

int prime[mx] ;

bool vis[mx] ;

int main()
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d ", &tmp) ;
        num[tmp]++;
    }
    
    for(ll i = 2; i < (ll)1e7 + 10 ; i++){
        if(!vis[(int)i])
        for(ll j = i ; j  < (ll)1e7 + 10 ; j += i ){
            prime[i] += num[j] ;
            
            vis[(int)j] = 1;
            
        }
    }
    
    for(int i = 2; i < mx ; i++){
        prime[i] += prime[ i - 1 ] ;
        
    }
    
    int m ;
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int l , r ;
        scanf("%d %d ", &l , &r) ;
        l = min(l , mx - 10) ;
        r = min(r, mx - 10 ) ;
        
        printf("%d\n", prime[ r ] - prime[ l - 1 ]);

    }
    
    
    return  0;
    
}