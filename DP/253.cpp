#include<iostream>
#include <algorithm>
using namespace std ;

int m , n , a[101] , b[101] , ans ;

int main (){
	cin >> n ;
	for(int i=0 ; i< n ; i++){
		cin >> a[i] ;
	}
	sort(a , a + n);
	cin >> m ;
	for(int i=0 ; i< m; i++){
		cin >> b[i] ;
	}
	sort(b , b + m);
	for(int i = 0 ; i < n  ; i++){
		for(int j = 0 ; j < m ; j++){
			if(abs(a[i] - b[j]) <= 1){
				b[j]= -1;
				ans++;
				break;
			}
		}
	}
	cout << ans ;
	return 0 ;
} 
