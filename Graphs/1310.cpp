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
#include <set>
using namespace std ;

#define sz size()
#define pb push_back
#define mp make_pair
#define rep(i,n) for ( int i = 0 ; i < n ; i ++ )
#define fd(i,a,b) for ( int i = a ; i <= b ; i ++ )
#define bd(i,a,b) for ( int i = a ; i >= b ; i -- )

typedef long long ll ;
typedef pair<int,int> ii ;

int arr[30010] ;

int main() {
  int n , t ;
  scanf("%d%d" , &n , &t ) ;
  fd ( i , 1 , n - 1 ) {
    scanf("%d" , &arr[i] ) ;
  }
  int i = 1 ;
  while ( i < n ) {
    if ( i == t )
      break ;
    i += arr[i] ;
  }
  if ( i == t )
    printf("YES") ;
  else
    printf("NO") ;
  return 0 ;
}

