#include<bits/stdc++.h>

using namespace std ;

int a[100] ;
int a2[100] ;
int main(){

    int n , maxi = 0 , j ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ){

        cin >> a[i] ;
        if ( a[i] == 1 ){

            maxi++ ;

        }

    }
    if ( n == maxi ){

        maxi = n-1 ;

    }
    for ( int i = 0 ; i < n ; i++ ){

        for ( int i2 = i ; i2 < n ; i2++ ){

            for ( int i3 = i ; i3 < i2 + 1 ; i3++ ){

                a[i3] = 1 - a[i3] ;

            }
            j = 0 ;
            for ( int i3 = 0 ; i3 < n ; i3++ ){

                if ( a[i3] == 1 ){

                    j++ ;

                }

            }
            maxi = max(j,maxi) ;
            for ( int i3 = i ; i3 < i2 + 1 ; i3++ ){

                a[i3] = 1 - a[i3] ;

            }

        }

    }
    cout << maxi ;

}
