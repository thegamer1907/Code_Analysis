#include <iostream>
using namespace std;

int main() {
	long long int n,t;
	cin>>n>>t;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int max =0,sum=arr[0];
	int ptr1=0,ptr2=0;
	if(n<=1){
	    if(arr[0]<=t)
	    max=1;
	   
	}
	while(ptr2<n-1){
	    
	    if(sum+arr[ptr2+1]<=t){
	        sum = sum+arr[ptr2+1];
	        ptr2++;
	        
	    }
	    
	    
	    else{
	        sum = sum - arr[ptr1];
	        ptr1++;
	    }
	    if(max<(ptr2-ptr1+1) && ptr2>=ptr1){
	        max = ptr2-ptr1+1;
	    }
	}
	cout<<max;
	return 0;
}
