#include <iostream>
#include <algorithm>
using namespace std ; 
int n , m , mx , a[100] , mn , x  ; 
int main()  {
	scanf("%d%d" , &n , &m );
	for(int i=0 ; i<n ;i++ )
		cin>>a[i]   ;
	sort ( a , a+n ) ;
	int mx = a[n-1]+m ;
	for (int i=0 ; i<n ;i++ ){
		while ( a[i]  < a[n-1] && m>0 ){
			a[i]++; 
			m-- ; 
		}
		mn = max ( mn , a[i] ); 
	}
	if ( m> 0 ){
		mn += (m/n) ; 
		if ( m%n !=0  )
			mn++; 
	}
	cout << mn << " "<< mx << endl; 	
}