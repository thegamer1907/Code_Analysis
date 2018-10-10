#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <string>
#include <sstream>
#include <set>

using namespace std ;
const int inf = 0x3f3f3f3f ;
const int maxn = 100010 ;

int n , res , ent;
int a[maxn] ;

int main(){

    scanf("%d",&n) ;


    for(int i = 1 ; i <= n ; ++i)
        scanf("%d",&a[i]) ;

    res = inf ;

    for(int i = 1 ; i <= n ; ++i){
        int k ;

        if(a[i] - i + 1 <= 0)
            k = 0 ;
        else {
            k = (a[i] - i + 1) / n ;
            if((a[i] - i + 1) % n != 0)
                k = k + 1 ;
        }
        //cout << k << endl ;
        if(res > (i - 1) + k * n){
            ent = i ;
            res = (i - 1) + k * n ;
        }
    }
    
    printf("%d\n",ent) ;



    return 0 ;
}
