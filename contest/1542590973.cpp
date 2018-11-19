/**
*
* Author: Mouhanad
* Lang: GNU C++14
*
**/
#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ii pair < int , int >
#define LS pair < ll , string >
typedef long long ll;
const int inf = 1<<30;
const int N =100100;
int n , a[N] , q ;

int main ( ){
 string s ;
 cin >> s;
 cin >> n ;
 bool beg1 = 0 , en1 = 0 , beg2 = 0 , en2 = 0 , sol = 0 ;
  char x ,y ;
 for ( int i  = 0;  i < n ;i++ ){
          cin >> x >> y ;

          if ( x == s[0] && y == s[1] ) sol =1 ;
          if ( x == s[0] ) beg1 = 1 ;
          if ( y == s[0] ) en1 = 1 ;
          if ( x == s[1] ) beg2 = 1 ;
          if ( y == s[1] ) en2 = 1 ;
 }
 if (  sol || (beg2&& en1)) puts("YES");
 else puts("NO");
return 0 ;
}
