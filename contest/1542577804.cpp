#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std ;
double p[3] , A , B ;
int ba , bb ;
int main(){
	scanf( "%lf%lf%lf" , &p[0] , &p[1] , &p[2] ) ;
	if( p[0] == 12 ) p[0] = 0 ;
	scanf( "%lf%lf" , &A , &B ) ;
	if( A == 12 ) A = 0 ;
	if( B == 12 ) B = 0 ;
	A = A * 30.0 ; B = B * 30.0 ;
	p[0] = ( p[0] + p[1] / 60 + p[2] / 3600 ) * 30.0 ;
	p[1] = ( p[1] + p[2] / 60 ) * 6.0 ;
	p[2] = p[2] * 6.0 ;
	sort( p , p + 3 ) ;
	if( A >= p[0] && A <= p[1] ) ba = 1 ;
	else if( A >= p[1] && A <= p[2] ) ba = 2 ;
	else ba = 3 ;
	if( B >= p[0] && B <= p[1] ) bb = 1 ;
	else if( B >= p[1] && B <= p[2] ) bb = 2 ;
	else bb = 3 ;
	//printf( "(main ) : %lf %lf %lf \n" , p[0] , p[1] , p[2] ) ;
	//printf( "(main ) : %d %d\n" ,ba , bb ) ;
	printf( ba == bb ? "YES" : "NO" ) ;
	return 0 ;
	//By Izumi_Hanako
}