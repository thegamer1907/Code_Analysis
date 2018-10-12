#include <iostream>
#include <algorithm> 
using namespace std;
 
int main() {
	// your code goes here
	int n ;
	cin>>n ; 
	int a[n] , m=n ;
	for(int i=0 ;i<n;i++)
		cin>>a[i];
	sort(a , a+n ) ; 
	int mid=n/2; 
	for(int i=0 ; mid<n && i<n/2 ;mid++ ){
		if(a[i]*2 <= a[mid] ){
			i++;
			m--;
		}
	}
	cout<< m <<endl; 
	return 0;
}