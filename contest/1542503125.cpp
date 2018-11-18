#include <bits/stdc++.h>
using namespace std;

string c [ 102] ;

int main () {
  string a ;
  cin >> a ;
  int n ;
  cin >> n ;
  bool f = false, s = false ;
  for ( int i = 0 ; i < n ; i ++ ){
    cin >> c[ i ] ;
    if ( c[i]== a ) {
      cout << "YES\n" ;
      return 0;
    }
    if ( c [ i ][ 0 ] == a [ 1 ] ) f = true ;
    if ( c [ i ][ 1 ] == a [ 0 ] ) s = true ;
  }
  if ( f&&s ) cout << "YES\n";
  else cout << "NO\n";
}
