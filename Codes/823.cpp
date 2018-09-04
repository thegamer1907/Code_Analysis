
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std ;
const int maxn = 51 ;

int n ;
long long k ;

long long two[maxn] ;

int main(){

    cin >> n >> k ;
    --n ;

    two[0] = (long long)1 ;
    for(int i = 1 ; i <= n ; ++i)
        two[i] = two[i - 1] << 1 ;

    for(int i = n ; i >= 1 ; --i){
        if(k == two[i]){
            printf("%d\n",i + 1) ; 
            return 0 ;
        } else {
            if(k > two[i]){
                k -= two[i] ;
            }
        }
    }

    printf("1\n") ;

    return 0 ;

}