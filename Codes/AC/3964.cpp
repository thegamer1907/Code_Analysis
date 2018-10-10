#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<queue>
#include<vector>
#include<iterator>
#include<stack>
#include<map>
#include<math.h>
using namespace std ;
#define clr(x) memset(x,0,sizeof(x))
typedef long long ll;
typedef long double ld;
const int inf = 0x3f3f3f3f;
const ll llinf = 0x3f3f3f3f3f3f3f3f ;
const int maxn = 1e5 + 5 ;
const int mod = 10007 ;
const double eps = 1e-5 ;

int col[maxn] ,row[maxn] ;

int main() {
    int n , m ;
    while(~scanf("%d%d" , &n , &m)) {
        int a[n+5][m+5] ;
        clr(a) ;
        clr(row) ;
        clr(col) ;
        for(int i = 1 ; i <= n ; i ++) {
            for(int j = 1 ; j <= m ; j ++) {
                scanf("%d" , &a[i][j]) ;
            }
        }

        for(int i = 1 ; i <= n ; i ++) {
            for(int j = 1 ; j <= m ; j ++) {
                int k = i ;
                if(col[j] >= k)
                    k = col[j] ;
                else
                    while(a[k+1][j] >= a[k][j] && k < n) {
                        k ++ ;
                    }
                col[j] = k ;
                row[i] = max(row[i] , k) ;
            }
        }

        int q ;
        scanf("%d" , &q) ;
        while(q--) {
            int l , r ;
            scanf("%d%d" , &l , &r) ;
            if(row[l] >= r) {
                printf("Yes\n") ;
            } else {
                printf("No\n") ;
            }
        }
    }
    return 0 ;
}
