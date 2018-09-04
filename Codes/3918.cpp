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
const int N =102;
ll r ;
char a[102];
int n[3] ;
int p[3] ;
int need[3] ;
bool ok ( ll x ) {
 ll cost = 0 ;
 ll needb = x*need[0] ;
 if ( needb > n[0] ) cost += abs(n[0]-needb)*p[0] ;
 ll needs = x*need[1] ;
 if ( needs > n[1] ) cost += abs(n[1]-needs)*p[1] ;
 ll needc = x*need[2] ;
 if ( needc > n[2] ) cost += abs(n[2]-needc)*p[2] ;
  return r >= cost ;
}
int main ( ){
   scanf("%s",a);
   for ( int i = 0 ; i < strlen(a) ; i++ )
    if ( a[i] == 'B' ) need[0]++;
    else if ( a[i] == 'S' ) need[1]++;
    else need[2]++ ;
   for ( int i = 0 ; i < 3 ; i++ ) scanf("%d",n+i);
   for ( int i = 0 ; i < 3 ; i++ ) scanf("%d",p+i);
   scanf("%lld",&r);
   ll lo = 0 , hi = 100000000000000 ;
   while ( lo < hi ) {
    ll mid = (lo + hi + 1 ) >> 1 ;
    if ( ok (mid )) lo = mid ;
    else hi = mid -1 ;
   }
   printf("%lld",lo);
return 0 ;
}
