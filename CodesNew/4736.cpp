#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int D(){
	int r ;
	//scanf("%d" , &r);
	cin >> r ;
	return r ;
}


ll LLD(){
	ll r ;
	scanf("%lld",&r);
	return r ;
}

int n , s ;

bool cpm (int s , int f){
	if ( s > f )
		return 1 ;
	return 0;
}

int main(){

scanf("%d" , &n);
vector < int > a( n );
for(int  i = 0 ; i < n ; i++)
	a[ i ] = D() ;

sort(a.begin() , a.end() , cpm );

int l1 = 0 , l2 = n / 2 ;
while(l1 < n / 2 && l2 < n ){
    if( 0.5 * a[ l1 ] >=  a [ l2 ] ){
	    l2++ , l1++ ;
		s++;
    }
    else
		l2++;

}


cout <<  n - s ;





  return 0 ;
}


