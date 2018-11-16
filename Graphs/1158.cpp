#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    
    int *arr = new int[n-1];
    for(int i=0;i<n-1;i++){
    	cin>>arr[i];
	}
	
	int curr = 1;
	int i = 0;
	while(curr<k && i<n-1){
		
		curr += arr[i];
		i+=arr[i];
	}
	
	if(curr==k){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}
