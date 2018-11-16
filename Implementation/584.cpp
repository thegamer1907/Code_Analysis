#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int a=0; a<n; a++){
		cin>>arr[a];
	}
	sort(arr, arr+n, greater<int>());
	
	int	constraint = arr[k-1];
	
	int counter=0;
	
	for (int a=0; a<n; a++){
		if (arr[a]>=constraint&&arr[a]>0){
			counter++;
		}
	}
	
	cout<<counter<<endl;
	return 0;
}