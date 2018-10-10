#include <bits/stdc++.h>
using namespace std;

int n , m , q , l , r ;
int main(){
    scanf("%d%d",&n,&m);
    int arr[n+1][m+1] , R[n+1] = {} , com[n+1][m+1] ;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j){
            scanf("%d",arr[i]+j);
            com[i][j] = 0 ;
        }
    for(int i=2;i<=n;++i)
        for(int j=1;j<=m;++j){
            com[i][j] += com[i-1][j] + (arr[i][j]>=arr[i-1][j]) ;
        }
    for(int i=1;i<=n;++i){
        int mx = max(R[i-1],i) ;
        for(int j=1;j<=m;++j){
            if(com[mx][j]-com[i][j]!=mx-i) continue ;
            for(int u=mx+1;u<=n;++u){
                if(arr[u][j]>=arr[u-1][j]) mx = u ;
                else break ;
            }
        }
        R[i] = mx ;
    }
    scanf("%d",&q);
    while( q-- && scanf("%d%d",&l,&r) ) puts( R[l]>=r ? "Yes" : "No" ) ;
    return 0;
}