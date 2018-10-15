#include <bits\stdc++.h>
using namespace std ;

int main () {
 int n , m , kmax , kmin , k =0 ;  int x ;
 int  ar [100] ;
 cin >> n >> m  ;
 for ( int i = 0;  i< n ; i ++ ) {
    cin >> ar[i] ;
 }
 sort ( ar , ar+n ) ;
kmax = ar[n-1] + m ;
 int y = m ;
     for ( int i =0 ; i < n-1 ; i ++ ) {
    if ( ar[i] < ar[n-1] && y >=  ar[n-1] -  ar[i] )
          {
            y =  y -  (ar[n-1] -  ar[i] )  ;
              ar[i] += ar[n-1] -  ar[i]   ;
              if (y <= 0 ) break ;
              continue ;
          }

        if ( ar[i] < ar[n-1] && y <  ar[n-1] -  ar[i] )
          {
            ar[i] += y  ;
            y =0 ;
            if (y <= 0 ) break ;
              continue ;
          }

    if ( ar[i] == ar[n-1]  ) {
        break ;
    }

 }


 if ( y > 0 )
 for ( int  i = 0 ; i  < n ; i ++  )
   if ( ar[i] == ar[n-1]   )
          {
           int x = n - i  ;
           ar[n-1] += ceil (y * 1.0  / x  *  1.0  ) ;
              break  ;
          }

 kmin = ar[n-1] ;
 cout << kmin << " " << kmax ;


return 0 ;
}
