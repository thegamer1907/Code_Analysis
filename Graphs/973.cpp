#include <iostream>
using namespace std;

int main(){
	int n, t, c = 1;
	cin>>n>>t;
	int arr[n];
	for(int i = 1; i < n; i++){
		cin>>arr[i];
	}
	while(c < t){
		c += arr[c];
	}
	if(c == t){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
