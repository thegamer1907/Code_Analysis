
#include "bits/stdc++.h"
using namespace std;

long long Solve(int N , int m , long long value , long long k){
	long long Ans = 0;

	for( int i = 1 ; i <= N ; ++i )
		Ans = Ans + min( value / i , m * 1LL );

	return Ans;	
}

int main(){
	int N , m , j;
	long long k , p , limit;
	scanf( "%d%d%lld" , &N , &m , &k );
	long long low = 1 , high = N * 1LL * m , middle;
	limit = high;

	while( high > low ){
		middle = ( low + high ) >> 1;
		if( Solve(N,m,middle,k) >= k ) high = middle - 1;
		else low = middle + 1;
	}

	int x;

	if( Solve(N,m,low,k) >= k ){
		for( p = low ; p >= 1 ; --p ){
			x = sqrt(p);

			for( j = 1 ; j <= x ; ++j ){
				if( p % j == 0 ){
					if( (j <= N && (p / j) <= m) || ((p / j) <= N && j <= m) ){
						printf( "%lld\n" , p );
						return 0;
					}
				} 
			}		
		}
	} 
	else{
		for( p = low + 1 ; p <= limit ; ++p ){
			x = sqrt(p);

			for( j = 1 ; j <= x ; ++j ){
				if( p % j == 0 ){
					if( (j <= N && (p / j) <= m) || ((p / j) <= N && j <= m) ){
						printf( "%lld\n" , p );
						return 0;
					}
				} 
			}			
		}
	} 

	return 0;
}