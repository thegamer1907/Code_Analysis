#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n , x  ; 
	cin>>n >> x ;
	int a[n] ; 
	for(int i=1 ;i<n ;i++ )
		cin>>a[i] ;
	for(int i=1 ;i<n ; ){
		i+=a[i]  ;
		if ( x == i ){
			cout<<"YES"<<endl; 
			return 0 ; 
		}
	//	cout<<i << " " ; 
	}	
	cout<<"NO"<<endl; 
	return 0;
}