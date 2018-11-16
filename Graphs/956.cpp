#include <bits/stdc++.h>

using namespace std ;

int ans ;
int c[100000] ;
int q = 1;

int main () {
    int a , b ;
    cin >> a >> b ;
    for(int i = 1 ; i < a; i++ ) {
        cin >> c[i] ;
    }
    while(q < b) {
        q = q + c[q] ;
    }
    if(q == b) {
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }
}
