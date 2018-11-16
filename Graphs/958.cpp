#include <bits/stdc++.h>

using namespace std ;

int n , t , a[100*1000] , h=1 ;

int main (){
	cin >> n >> t ;
	for (int i = 1 ; i < n ; i++){
		cin >> a[i] ;
	}
	while (h < t){
		h+=a[h] ;
	}
	if(h==t){
		cout << "YES" ;
	}else{
		cout << "NO" ;
	}
	return 0 ;
}
