#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std ;

#define sz size()
#define pb push_back
#define mp make_pair
#define rep(i,n) for ( int i = 0 ; i < n ; i ++ )
#define fd(i,a,b) for ( int i = a ; i <= b ; i ++ )
#define bd(i,a,b) for ( int i = a ; i >= b ; i -- )

typedef long long ll ;
typedef pair<int,int> ii ;

int main() {
  int n , t ;
  scanf("%d%d" , &n , &t ) ;
  char s[59] ;
  scanf("%s" , s ) ;
  rep ( i , t ) {
    rep ( j , n - 1 ) {
      if ( s[j+1] == 'G' ) {
	char temp = s[j] ;
	s[j] = s[j+1] ;
	s[j+1] = temp ;
	j ++ ;
      }
    }
  }
  printf("%s" , s ) ;
  return 0 ;
}
