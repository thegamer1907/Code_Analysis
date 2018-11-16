#include <bits/stdc++.h>
using namespace std;

void flip(int i , int j , bool* a){
	
	for(int k=i;k<=j;k++)
	 a[k] = !a[k] ;
}

int main() {
	int n ;
	cin>>n;
	
	bool a[n] , b[n];
	
	for(int i=0;i<n;i++) cin>>a[i] ;
	for(int i=0;i<n;i++) b[i] = a[i] ;
    int max = 0 ;
    for(int i=0;i<n;i++){
    	for(int j=i;j<n;j++){
    	int	current = 0 ;
    		flip(i,j,b);
    	for(int k=0;k<n;k++) if(b[k]) current++;
    	for(int k=0;k<n;k++) b[k] = a[k] ;	
    
    	 if(max<current) {max = current ; }//cout<<i<<" "<<j<<" "<<current<<endl;}
    	}
    } 
     cout<<max;
	return 0;
}